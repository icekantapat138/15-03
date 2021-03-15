#ifndef ATHLETE_H
#define ATHLETE_H

#include <string>

class Athlete {
private:
    std::string name;
    int age;
    std::string sport;

public:
    Athlete(std::string name, int age, std::string sport);
    std::string playSport();
    std::string introduce();
};

#endif