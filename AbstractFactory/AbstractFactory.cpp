// Copyright (c) 2018 Liming Shao <lmshao@163.com>

#include "AbstractFactory.h"
#include <iostream>

Birds::Birds() {
    std::cout << "Birds::Birds()" << std::endl;
}

Birds::~Birds() {
    std::cout << "Birds::~Birds()" << std::endl;
}

Sparrow::Sparrow() {
    std::cout << "Sparrow::Sparrow()" << std::endl;
}

Sparrow::~Sparrow() {
    std::cout << "Sparrow::~Sparrow()" << std::endl;
}

void Sparrow::who() {
    std::cout << "I am a Sparrow." << std::endl;
}

Eagle::Eagle() {
    std::cout << "Eagle::Eagle()" << std::endl;
}

Eagle::~Eagle() {
    std::cout << "Eagle::~Eagle()" << std::endl;
}

void Eagle::who() {
    std::cout << "I am an Eagle." << std::endl;
}

Beast::Beast() {
    std::cout << "Beast::Beast()" << std::endl;
}

Beast::~Beast() {
    std::cout << "Beast::~Beast()" << std::endl;
}

Wolf::Wolf() {
    std::cout << "Wolf::Wolf()" << std::endl;
}

Wolf::~Wolf() {
    std::cout << "Wolf::~Wolf()" << std::endl;
}

void Wolf::who() {
    std::cout << "I am a Wolf." << std::endl;
}

Tiger::Tiger() {
    std::cout << "Tiger::Tiger()" << std::endl;
}

Tiger::~Tiger() {
    std::cout << "Tiger::~Tiger()" << std::endl;
}

void Tiger::who() {
    std::cout << "I am a Tiger." << std::endl;
}

Hunter::Hunter() {
    std::cout << "Hunter::Hunter()" << std::endl;
}

Hunter::~Hunter() {
    std::cout << "Hunter::~Hunter()" << std::endl;
}

JuniorHunter::JuniorHunter() {
    std::cout << "JuniorHunter::JuniorHunter()" << std::endl;
}

JuniorHunter::~JuniorHunter() {
    std::cout << "JuniorHunter::~JuniorHunter()" << std::endl;
}

Birds *JuniorHunter::huntBirds() {
    std::cout << "I caught a sparrow." << std::endl;
    return  new Sparrow();
}

Beast *JuniorHunter::huntBeast() {
    std::cout << "I caught an wolf." << std::endl;
    return new Wolf();
}

SeniorHunter::SeniorHunter() {
    std::cout << "SeniorHunter::SeniorHunter()" << std::endl;
}

SeniorHunter::~SeniorHunter() {
    std::cout << "SeniorHunter::~SeniorHunter()" << std::endl;
}

Birds *SeniorHunter::huntBirds() {
    std::cout << "I caught an eagle." << std::endl;
    return new Eagle();
}

Beast *SeniorHunter::huntBeast() {
    std::cout << "I caught an tiger." << std::endl;
    return new Tiger();
}

