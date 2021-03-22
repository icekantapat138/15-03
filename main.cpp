#include <iostream>
#include "Person.h"
#include "Artist.h"
#include "Athlete.h"
using namespace std;

int main() {
    Artist boy("Boy Peacemaker", 40, "Pop");
    cout << boy.introduce() << endl;

    cout << "-----------------------------------" << endl;

    Athlete selena("Selena Williams", 39, "Tennis");
    cout << selena.introduce() << endl;

    cout << "-----------------------------------" << endl;
    
    Person john("John Wick", 50);
    cout << john.introduce() << endl;

    cout << "-----------------------------------" << endl;

    Person* people[10];
    people[0] = new Person("Person A", 18);
    people[1] = new Artist("Artist B", 29, "Rock");
    people[2] = new Athlete("Athlete C", 26 , "Golf");

    for(int i = 0; i<3 ;++i){
        Person*p = people[i];
        cout << "[" << i << "]" << p->introduce() << endl;
    } 
}