// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#include "Factory.h"
#include <iostream>

Product::Product()
{
    std::cout << "I am Product ..." << std::endl;
}

Product::~Product()
{
    std::cout << "Leave Product ..." << std::endl;
}

Toy::Toy()
{
    std::cout << "I am Toy ..." << std::endl;
}

Toy::~Toy()
{
    std::cout << "Leave Toy ..." << std::endl;
}

Factory::Factory()
{
    std::cout << "I am Factory ..." << std::endl;
}

Factory::~Factory()
{
    std::cout << "Leave Factory ..." << std::endl;
}

ToyFactory::ToyFactory()
{
    std::cout << "I am ToyFactory ..." << std::endl;
}

ToyFactory::~ToyFactory()
{
    std::cout << "Leave ToyFactory ..." << std::endl;
}

Product *ToyFactory::createProduct()
{
    std::cout << "CreateProduct: Toy" << std::endl;
    return new Toy();
}
