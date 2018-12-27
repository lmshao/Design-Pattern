// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
  public:
    static Singleton *instance();
    void print();

  protected:
    Singleton();
};

#endif // !SINGLETON_H
