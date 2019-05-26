# UE4 C++ Oscillating Movement Component
This plugin consists of a blueprint editable component written in C++ that lets you configure custom oscillating movement. 

This component started as a simple functionality that i needed in a personal project i was working on. In that project, i had a camera that followed a character, and i didn't want the camera to be static when the character was idle. I wanted a more realistic effect, as if the camera was being held by a human, so i added tiny oscillations to the camera position in random directions, to give the impression of an unsteady pulse.  

To see this plugin in action, check the following video: https://youtu.be/M4ZAeesNThU

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

* Extendable oscillation modes: This would consist on implementing oscillation modes in a more generic way so other users can extend them and develop their own modes. For example, instead of only having a Random and Sequential oscillation mode, it could be extended to have an N-Alternator oscillation mode, that selects waves from the array that are separated by N positions.

* Add an option to edit oscillating waves with a curve editor

* Extend the random oscillation mode to support the configuration of probabilistic weights to each wave, in order to have more control of which waves are more likely to be selected from the array.

# Feedback
Any feedback on the implementation or ideas to improve/extend the plugin are more than welcome!
