/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
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
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
Thing 3) Airport
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
Thing 4) Audio mixer
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
Thing 5) Equalizer
5 properties:
    1) low gain level 
    2) mid frequency Hz
    3) mid gain level
    4) high frequency Hz
    5) high gain level
3 things it can do:
    1) lower frequencies 
    2) boost frequencies
    3) cut frequencies
 */

/*
Thing 6) Compressor
5 properties:
    1) threshold
    2) atack
    3) sustain
    4) release
    5) gain reduction
3 things it can do:
    1) add sustain to control dynamics
    2) make weak signals louder
    3) compress loud signals
 */

/*
Thing 7) Input controls
5 properties:
    1) hi-z selector switch
    2) line selector switch
    3) 48v selector switch
    4) high pass filter switch
    5) gain level
3 things it can do:
    1) select input
    2) turn on phantom power
    3) adjust input gain
 */

/*
Thing 8) Routing controls
5 properties:
    1) send level
    2) post fader selector switch
    3) master selector switch
    4) bus selector switch
    5) mute switch
3 things it can do:
    1) route audio signal to master bus
    2) mute channel
    3) adjust volume
 */

/*
Thing 9) Send and effects controls
5 properties:
    1) send 1 effect type
    2) send 2 effect type
    3) send 1 gain level
    4) send 2 gain level
    5) send 3 gain level
3 things it can do:
    1) add effects to audio signal
    2) send audio to external effects
    3) send monitor sub mixes
 */


/*
Thing 10) Audio mixer channel strip
    5 properties:
    1) equalizer controls
    2) compressor controls
    3) input controls
    4) routing controls
    5) send and effects controls
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
