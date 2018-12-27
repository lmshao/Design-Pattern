// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#ifndef FACTORY_H
#define FACTORY_H

// Factory(ToyFactory) ----> Product(Toy)

class Product
{
  public:
    virtual ~Product() = 0;

  protected:
    Product();
};

class Toy : public Product
{
  public:
    Toy();
    ~Toy();
};

class Factory
{
  public:
    virtual ~Factory() = 0;
    virtual Product *createProduct() = 0;

  protected:
    Factory();
};

class ToyFactory : public Factory
{
  public:
    ToyFactory();
    ~ToyFactory();
    Product *createProduct();
};

#endif
