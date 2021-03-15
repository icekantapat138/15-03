#include "Artist.h"
#include <string>

Artist::Artist(std::string name, int age, std::string genre)
        :Person(name, age) { //ชื่อclass::ชื่อconstructorที่อยู่ในclass

    this->genre = genre;
}

std::string Artist::playMusic(){ //ชื่อclass::ชื่อmethodที่อยู่ในclass
    return getName() + " is playing " + genre + " music.";
}

//std::string Artist::introduce() { //ชื่อclass::ชื่อmethodที่อยู่ในclass
    //std::string message = "My name is " + name + ". ";
    //message += "I'm " + std::to_string(age) + " years old.\n"; //เอาstrบวกกัน ใช้to_strแปลงก่อนถึงจะบวกได้
    //message += playMusic();
    //return message;
//}