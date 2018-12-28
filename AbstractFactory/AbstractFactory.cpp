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

Birds *JuniorHunter::whatBirdsToHunt() {
    std::cout << "I caught a sparrow." << std::endl;
    return  new Sparrow();
}

SeniorHunter::SeniorHunter() {
    std::cout << "SeniorHunter::SeniorHunter()" << std::endl;
}

SeniorHunter::~SeniorHunter() {
    std::cout << "SeniorHunter::~SeniorHunter()" << std::endl;
}

Birds *SeniorHunter::whatBirdsToHunt() {
    std::cout << "I caught an eagle." << std::endl;
    return new Eagle();
}
