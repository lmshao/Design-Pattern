// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#include "Builder.h"
#include <iostream>

CourseType::~CourseType()
{
    std::cout << "Leave CourseType" << std::endl;
}

CourseType::CourseType()
{
    std::cout << "Enter CourseType" << std::endl;
}

SeniorClass::SeniorClass()
{
    std::cout << "Enter SeniorClass" << std::endl;
}

SeniorClass::~SeniorClass()
{
    std::cout << "Leave SeniorClass" << std::endl;
}

void SeniorClass::MathClass()
{
    std::cout << "Math Class" << std::endl;
}

void SeniorClass::EnglishClass()
{
    std::cout << "English Class" << std::endl;
}

void SeniorClass::ChineseClass()
{
    std::cout << "Chinese Class" << std::endl;
}

Director::Director(CourseType *ct)
{
    std::cout << "Enter Director" << std::endl;
    this->ct = ct;
}

Director::~Director()
{
    std::cout << "Leave Director" << std::endl;
    delete this->ct;
}

void Director::getClassScheduleA()
{
    std::cout << "The Schedule of Class 1" << std::endl;
    ct->ChineseClass();
    ct->EnglishClass();
    ct->MathClass();
}

void Director::getClassScheduleB()
{
    std::cout << "The Schedule of Class 2" << std::endl;
    ct->EnglishClass();
    ct->MathClass();
    ct->ChineseClass();
}
