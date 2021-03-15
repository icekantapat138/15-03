#ifndef ATHLETE_H
#define ATHLETE_H

#include <string>
#include "Person.h"

class Athlete : public Person{
private:
  
    std::string sport;

public:
    Athlete(std::string name, int age, std::string sport);
    std::string playSport();
};

#endif