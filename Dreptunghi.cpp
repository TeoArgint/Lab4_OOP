#include "Dreptunghi.h"
#include <iostream>

Dreptunghi::Dreptunghi() {
    this->lungime = 0;
    this->latime = 0;
}

Dreptunghi::Dreptunghi(int lungime, int latime) {
    this->lungime = lungime;
    this->latime = latime;
}

Dreptunghi::Dreptunghi(const Dreptunghi &s) {
    this->lungime = s.lungime;
    this->latime = s.latime;
}

Dreptunghi::~Dreptunghi() {
    this->lungime = 0;
    this->latime = 0;
}

int Dreptunghi::getLungime() {
    return this->lungime;
}

int Dreptunghi::getLatime() {
    return this->latime;
}

void Dreptunghi::setLungime(int lungime) {
    this->lungime = lungime;
}

void Dreptunghi::setLatime(int latime) {
    this->latime = latime;
}

