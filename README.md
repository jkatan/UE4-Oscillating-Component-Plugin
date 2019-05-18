# UE4OscilatingComponentPlugin
This plugin consists of a blueprint editable component written in C++ that lets you configure custom oscillating movement.

# How it works 
When adding this component to an actor, you can configure an array of oscillating waves for the movement. Each oscillating has the following configurable parameters:

* Direction: A unit vector indicating the direction of the oscillation
* Amplitude of the oscillation
* Period of the oscillation

Finally, you can also select one of the following oscillation modes:

* Random: At the end of each oscillation, a random oscillating wave will be picked from the array to execute.
* Sequential: All the oscillating waves in the array will be executed in order. When the last wave of the array is reached, it will start again from the begining of the array.
