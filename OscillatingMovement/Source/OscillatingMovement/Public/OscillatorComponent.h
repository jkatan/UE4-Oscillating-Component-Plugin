#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OscillatorComponent.generated.h"

USTRUCT(BlueprintType)
struct FOscillatingWave
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FVector WaveDirection = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere)
	float WaveAmplitude = 0.0f;;

	UPROPERTY(EditAnywhere)
	float WavePeriod = 0.0f;

	FORCEINLINE bool operator==(const FOscillatingWave &Other) const
	{
		return WaveDirection == Other.WaveDirection && WaveAmplitude == Other.WaveAmplitude && WavePeriod == Other.WavePeriod;
	}
};

UENUM(BlueprintType)
enum class EOscillationMode : uint8
{
	Random,
	Sequential
};


UCLASS( ClassGroup=(OscillatingMovement), meta=(BlueprintSpawnableComponent) )
class UOscillatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UOscillatorComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Oscillation Setup", meta = (AllowPrivateAccess = true))
	EOscillationMode OscillationMode = EOscillationMode::Random;

	UPROPERTY(EditAnywhere, Category = "Oscillation Setup", meta = (AllowPrivateAccess = true))
	TArray<FOscillatingWave> OscillationWaves;

	UPROPERTY(EditAnywhere, Category = "Debugging Setup", meta = (AllowPrivateAccess = true))
	bool bDebuggingEnabled = false;

	UPROPERTY()
	AActor* OscillationTarget;

	float DeltaPeriod = 0.0f;

	FOscillatingWave ActiveWave;

	float ActiveWaveSweptDegrees = 0.0f;

	void PerformOscillation(float DeltaTime);

	FOscillatingWave SelectWaveToOscillate();

	FOscillatingWave SelectRandomWave();

	FOscillatingWave SelectNextSequentialWave();
};
