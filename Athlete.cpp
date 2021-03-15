#include "Athlete.h"
#include <string>

Athlete::Athlete(std::string name, int age, std::string sport)
        :Person(name, age) {
    this->sport = sport;
}

std::string Athlete::playSport() {
    return getName() + " is playing " + sport + ".";
}

