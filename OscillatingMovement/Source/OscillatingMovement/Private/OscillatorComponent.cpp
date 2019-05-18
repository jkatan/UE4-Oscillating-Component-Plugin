#include "../Public/OscillatorComponent.h"
#include "GameFramework/Actor.h"

UOscillatorComponent::UOscillatorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UOscillatorComponent::BeginPlay()
{
	Super::BeginPlay();

	OscillationTarget = GetOwner();

	ActiveWave = SelectWaveToOscillate();
}

void UOscillatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsValid(OscillationTarget))
	{
		PerformOscillation(DeltaTime);
	}
	else
	{
		if (bDebuggingEnabled)
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid Component Owner..."));
		}
	}
}

void UOscillatorComponent::PerformOscillation(float DeltaTime)
{
	DeltaPeriod = 360.0f * DeltaTime;

	ActiveWaveSweptDegrees = (int)(ActiveWaveSweptDegrees + (DeltaPeriod / ActiveWave.WavePeriod)) % 360;

	if (ActiveWaveSweptDegrees == 0)
	{
		ActiveWave = SelectWaveToOscillate();
	}

	OscillationTarget->AddActorLocalOffset(ActiveWave.WaveDirection * ActiveWave.WaveAmplitude * FMath::Sin(FMath::DegreesToRadians(ActiveWaveSweptDegrees)));
}

FOscillatingWave UOscillatorComponent::SelectWaveToOscillate()
{
	if (OscillationWaves.Num() == 0)
	{
		if (bDebuggingEnabled)
		{
			UE_LOG(LogTemp, Warning, TEXT("Oscillation Waves array is empty, returning default wave (all values are zero) ..."));
		}

		return FOscillatingWave();
	}

	switch (OscillationMode)
	{
	case EOscillationMode::Random:
		return SelectRandomWave();
		break;

	case EOscillationMode::Sequential:
		return SelectNextSequentialWave();
		break;

	default:
		return FOscillatingWave();
		break;
	}
}

FOscillatingWave UOscillatorComponent::SelectRandomWave()
{
	return OscillationWaves[FMath::RandRange(0, OscillationWaves.Num() - 1)];
}

FOscillatingWave UOscillatorComponent::SelectNextSequentialWave()
{
	int ActiveWaveIndex = OscillationWaves.IndexOfByKey(ActiveWave);

	if (ActiveWaveIndex == INDEX_NONE)
	{
		return OscillationWaves[0];
	}

	if (ActiveWaveIndex == OscillationWaves.Num() - 1)
	{
		ActiveWaveIndex = 0;
	}
	else
	{
		ActiveWaveIndex++;
	}

	return OscillationWaves[ActiveWaveIndex];
}

