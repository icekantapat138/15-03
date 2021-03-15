#include <iostream>
#include "Person.h"
#include "Artist.h"
#include "Athlete.h"
using namespace std;

int main() {
    Artist boy("Boy Peacemaker", 40, "Pop");
    cout << boy.introduce() << endl;
    cout << boy.playMusic() << endl;

    cout << "-----------------------------------" << endl;

    Athlete selena("Selena Williams", 39, "Tennis");
    cout << selena.introduce() << endl;
    cout << selena.playSport() << endl;

    cout << "-----------------------------------" << endl;
    
    Person john("John Wick", 50);
    cout << john.introduce() << endl;
}