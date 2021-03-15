#ifndef ARTIST_H //ใช้คู่กับendif
#define ARTIST_H

#include <string>
#include "Person.h"

class Artist : public Person {
private:
    
    std::string genre;

public:
    Artist(std::string name, int age, std::string genre);
    std::string playMusic(); //ประกาศheader
    
};

#endif