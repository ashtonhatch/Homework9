#ifndef AQUARIUM_H
#define AQUARIUM_H
#include <iostream>
using namespace std;

struct Fish
{
    string name;
    int gallons_required;
};  

class Aquarium {


private:

    
    static const int tank_size_gallons;
    int gallons_used;
    string aquarist_name;

public:
    
    Aquarium(string theaquarist_name){
        aquarist_name = theaquarist_name;
        gallons_used = 0;
        
    };

    

    int getGallonsUsed();

    string getAquaristName();

    bool loadFish();

    void displayAvailableFish();

    int addFish();

    bool removeFish();
    bool writeAquariumContents();	

};




#endif