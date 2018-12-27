// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#include <iostream>
#include "Singleton.h"

int main()
{
    Singleton *singleton = Singleton::instance();
    singleton->print();
    Singleton *singleton1 = Singleton::instance();
    singleton1->print();
}