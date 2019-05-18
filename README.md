# UE4 C++ Oscillating Movement Component
This plugin consists of a blueprint editable component written in C++ that lets you configure custom oscillating movement. 

This component started as a simple functionality that i needed in a personal project i was working on. In that project, i had a camera that followed a character, and i didn't want the camera to be static when the character was idle. I wanted a more realistic effect, as if the camera was being held by a human, so i added tiny oscillations to the camera position in random directions, to give the impression of an unsteady pulse.  

# How it works 
When adding this component to an actor, you can configure an array of oscillating waves for the movement. Each oscillating wave has the following configurable parameters:

* Direction: A unit vector indicating the direction of the oscillation
* Amplitude of the oscillation
* Period of the oscillation

Finally, you can also select one of the following oscillation modes:

* Random: At the end of each oscillation, a random oscillating wave will be picked from the array to execute.
* Sequential: All the oscillating waves in the array will be executed in order. When the last wave of the array is reached, it will start again from the begining of the array.

# Next steps
Here are some ideas that i am planning to implement:

* Extendable oscillating modes: This would consist on implementing oscillating modes in a more generic way so other users can extend them and develop their own oscillating modes. For example, instead of only having a Random and Sequential oscilating mode, it could be extended to have an N-Alternator oscillating mode, that selects waves from the array that are separated by N positions.

* Add an option to edit oscillating waves with a curve editor

# Feedback
Any feedback on the implementation or ideas to improve/extend the plugin are more than welcome!
