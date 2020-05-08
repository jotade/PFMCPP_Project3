/*
Project 3 - Part 1b / 5
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

1)  Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or properties and 3 things it can do
        b) remember: these properties will eventually become primitives
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
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
