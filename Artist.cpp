#include "Artist.h"
#include <string>

Artist::Artist(std::string name, int age, std::string genre) {
    this->name = name;
    this->age = age;
    this->genre = genre;
}

std::string Artist::playMusic(){
    return name + " is playing " + genre + " music.";
}

std::string Artist::introduce() {
    std::string message = "My name is " + name + ". ";
    message += "I'm " + std::to_string(age) + " years old.\n";
    message += playMusic();
    return message;
}