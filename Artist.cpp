#include "Artist.h"
#include <string>

Artist::Artist(std::string name, int age, std::string genre)
        :Person(name, age) { //ชื่อclass::ชื่อconstructorที่อยู่ในclass

    this->genre = genre;
}

std::string Artist::playMusic(){ //ชื่อclass::ชื่อmethodที่อยู่ในclass
    return getName() + " is playing " + genre + " music.";
}

std::string Artist::introduce() {
    return Person::introduce() + "\n" + playMusic();
}