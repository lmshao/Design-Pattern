// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#include "Builder.h"

int main()
{
    Director *dt = new Director(new SeniorClass());
    dt->getClassScheduleA();
    dt->getClassScheduleB();
    delete dt;
}