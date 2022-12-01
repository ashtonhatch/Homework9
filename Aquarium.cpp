#include <iostream>
#include "Aquarium.h"
using namespace std;


int main() {


//create an aquarium object
Aquarium billys_aquarium("Billy");


//test getAquaristName method

cout << billys_aquarium.getAquaristName() << endl;

//test getGallonsUsed method

cout << billys_aquarium.getGallonsUsed() << endl;


return 0;

}





string Aquarium::getAquaristName() {
    return aquarist_name;
}


int Aquarium::getGallonsUsed() {

    return 0;

}


