#include "Athlete.h"
#include <string>

Athlete::Athlete(std::string name, int age, std::string sport) {
    this->name = name;
    this->age = age;
    this->sport = sport;
}

std::string Athlete::playSport() {
    return name + " is playing " + sport + ".";
}

std::string Athlete::introduce() {
    std::string message = "My name is " + name + ". ";
    message += "I'm " + std::to_string(age) + " years old.\n";
    message += playSport();
    return message;
}