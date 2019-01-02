// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#include "Singleton.h"

#include <iostream>

static Singleton *gInstance = NULL;

Singleton *Singleton::instance()
{
    if (!gInstance) {
        gInstance = new Singleton();
    }
    return gInstance;
}

void Singleton::print()
{
    std::cout << "Ptr: " << this << std::endl;
}

Singleton::Singleton()
{
    std::cout << "Singleton" << std::endl;
}
