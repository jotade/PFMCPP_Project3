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

struct Aircraft 
{
    //1) approach speed
    int approachSpeed = 0;
    //2) cruise altitude
    int cruiseAltitude = 0;
    //3) max speed
    int maxSpeed = 0;
    //4) max take off weight 
    float maxTakeOffWeight = 0.0f;
    //5) gross weight
    float grossWeight = 0.0f;

    //1) yaw movement
    int yaw(int degrees);
    //2) roll movement
    int roll(int degrees);
    //3) pitch movement
    int pitch(int degrees);
};

struct MidiKeyboardController 
{
    //1) pitch bend
    int pitchBend = 0;
    //2) modulation
    int modulation = 0;
    //3) octave
    int octave = 0;
    //4) volume
    int volume = 0;
    //5) foot switch pressed
    bool isFootSwitchPressed = 0;

    //1) send midi notes
    int playNote(int note);
    //2) send midi volume variations
    int adjustVolume(int volume);
    //3) change keyboard octaves
    void selectOctave(int octave);
};

struct Airport 
{
    //1) runway
    struct Runway 
    {
      int orientation = 0;
      float length = 0.0f;
      float width = 0.0f;
    };
    //2) passengers terminal
    struct PassengersTerminal 
    {
        int numberOfGates;
        int numberOfAirlineCounters;
        int numberOfRestaurants;
    };
    //3) control tower
    struct ControlTower 
    {
        float radioFrequency = 0.0f;
    };
    //4) fire fighters station
    struct FireStation 
    {
        int numberOfTrucks = 0;
        int numberOfFireman = 0;
    };
    //5) cargo apron
    struct CargoApron 
    {
        int numberOfSpots = 0;
    };

    //1) Manage airline flights
    CargoApron manageAirlineFlights(CargoApron apron);
    //2) Manage passengers
    PassengersTerminal managePassengers(PassengersTerminal terminal);
    //3) Manage aircraft traffic 
    Runway manageAircraftTraffic(Runway runway);

    Runway runway;
    PassengersTerminal terminal;
    ControlTower tower;
    FireStation firestation;
    CargoApron apron;
};

struct AudioMixer 
{

    struct MasterBus 
    {
        int leftFaderLevel = 0;
        int rightFaderLevel = 0;
        bool standBySwitchOn = false;
        int leftChannelOutputGain = 0;
        int rightChannelOutputGain = 0;

        void toggleStandby(bool on);
        void sendLeftAudio(int gain);
        void sendRightAudio(int gain);
    };

    struct AuxBus 
    {
        int leftFaderLevel = 0;
        int rightFaderLevel = 0;
        bool muteSwitchOn = false;
        int leftChannelOutputGain = 0;
        int rightChannelOutputGain = 0;

        void toggleMute(bool on);
        void sendLeftAudio(int gain);
        void sendRightAudio(int gain);
    };

    struct SendBus 
    {
        int leftFaderLevel = 0;
        int rightFaderLevel = 0;
        bool muteSwitchOn = false;
        int leftChannelOutputGain = 0;
        int rightChannelOutputGain = 0;

        bool toggleMute(bool on);
        void sendLeftAudio(int gain);
        void sendRightAudio(int gain);
    };

    //1) number of audio inputs
    int audioInputCount = 0;
    //2) number of audio outputs
    int audioOutputCount = 0;
    //3) master bus
    MasterBus masterBus;
    //4) aux bus
    AuxBus auxBus;
    //5) send bus
    SendBus sendBus;

    //1) mix incoming audio signals
    double mixAudio();
    //2) route mixed audio to outputs
    void routeAudio();
    //3) monitor input through headphones 
    void monitorHeadphones();
 
};

struct Equalizer 
{

    //1) low gain level 
    int lowGainLevel = 0;
    //2) mid frequency Hz
    float midFrequencyHz = 0.0f;
    //3) mid gain level
    int midGainLevel = 0;
    //4) high frequency Hz
    float highFrequencyHz = 0.0f;
    //5) high gain level
    int highGainLevel = 0;

    //1) lower frequencies 
    float lower(float Hz);
    //2) boost frequencies
    float boost(float Hz);
    //3) cut frequencies
    bool highPass(bool on);
};

struct Compressor 
{
    //1) threshold
    float threshold = 0.0;
    //2) atack
    float atack = 0.0;
    //3) sustain
    float sustain = 0.0;
    //4) release
    float release = 0.0;
    //5) gain reduction
    float ratio = 0.0;

    //1) add sustain to control dynamics
    void controlDynamics(float threshold, float atack, float release);
    //2) make weak signals louder
    void controlDynamics(float threshold, float atack, float release,int makeUpGain);
    //3) compress loud signals
    void controlDynamics(float threshold, float atack, float release,float ratio);
};

struct InputControls 
{
    //1) hi-z selector switch
    bool highImpedanceOn = false;
    //2) line selector switch
    bool engageLineInput = false;
    //3) 48v selector switch
    bool phantomPowerOn = false;
    //4) high pass filter switch
    bool engageHighPassFilter = false;
    //5) gain level
    float gainLevel = 0;

    //1) select input
    void selectInput(bool lineInputOn);
    //2) turn on phantom power
    void togglePhantomPower(bool phantomOn);
    //3) adjust input gain
    int inputGain(int level);
};

struct RoutingControls 
{
    //1) send level
    int sendLevel = 0;
    //2) post fader selector switch
    bool postFaderOn = false;
    //3) master selector switch
    bool routeToMaster = false;
    //4) bus selector switch
    bool routeToBus = false;
    //5) mute switch
    bool muteOn = false;

    //1) route audio signal to master bus
    void routeSignal(bool selectBus, bool selectMaster);
    //2) mute channel
    void toggleMute(bool mute);
    //3) adjust volume
    int setVolume(int level);
};

struct SendFXControls 
{
    //1) send 1 effect type
    std::string effect1Selected = "Reverb";
    //2) send 2 effect type
    std::string effect2Selected = "Delay";
    //3) send 1 gain level
    int gainLevel1 = 0;
    //4) send 2 gain level
    int gainLevel2 = 0;
    //5) send 3 gain level
    int gainLevel3 = 0;

    //1) add effects to audio signal
    void addFX(int fxSelected, int gainLevel);
    //2) send audio to external effects
    int sendToFx(int gainLevel);
    //3) send monitor sub mixes
    int sendToMonitorOutput(int gainLevel);
};

struct ChannelStrip 
{
    //1) equalizer controls
    Equalizer equalizer;
    //2) compressor controls
    Compressor compressor;
    //3) input controls
    InputControls inputControls;
    //4) routing controls
    RoutingControls routingControls;
    //5) send and effects controls
    SendFXControls sends;

    //1) adjust input gain
    InputControls setInputGain(InputControls input);
    //2) adjust input frequencies with the equalizer
    Equalizer setTone(Equalizer eq);
    //3) control audio dynamics through the compressor
    Compressor compress(Compressor compressor);
};

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
