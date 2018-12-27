// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#include "Factory.h"

int main()
{
    Factory *factory = new ToyFactory();
    Product *product = factory->createProduct();
    delete factory;
    delete product;
    return 0;
}