#ifndef ARTIST_H
#define ARTIST_H

#include <string>

class Artist {
private:
    std::string name;
    int age;
    std::string genre;

public:
    Artist(std::string name, int age, std::string genre);
    std::string playMusic();
    std::string introduce();
};

#endif