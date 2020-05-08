/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
*/

/*
Thing 1) Aircraft
5 properties:
    1) approach speed
    2) cruise altitude
    3) max speed
    4) max take off weight 
    5) gross weight
3 things it can do:
    1) yaw movement
    2) roll movement
    3) pitch movement
 */

/*
Thing 2) Midi keyboard controller
5 properties:
    1) pitch bend
    2) modulation
    3) octave
    4) volume
    5) foot switch pressed
3 things it can do:
    1) send midi notes
    2) send midi volume variations
    3) change keyboard octaves
 */

/*
Thing 3) Audio Mixer
5 properties:
    1) number of audio inputs
    2) number of audio outputs
    3) master bus
    4) aux bus
    5) send bus
3 things it can do:
    1) mix incoming audio signals
    2) route mixed audio to outputs
    3) monitor input through headphones
 */

/*
Thing 4) Audio mixer channel strip
5 properties:
    1) equalizer controls
    2) compressor controls
    3) input signal
    4) fader
    5) input gain
3 things it can do:
    1) adjust input gain
    2) adjust input frequencies with the equalizer
    3) control audio dynamics through the compressor
 */

/*
Thing 10) Airport
5 properties:
    1) runway
    2) passengers terminal
    3) control tower
    4) fire fighters station
    5) cargo apron
3 things it can do:
    1) Manage airline flights
    2) Manage passengers
    3) Manage aircraft traffic 
 */


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
