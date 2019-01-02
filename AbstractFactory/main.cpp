// Copyright (c) 2018 Liming Shao <lmshao@163.com>

#include "AbstractFactory.h"

int main()
{
    Hunter *juniorHunter = new JuniorHunter();
    Birds *birds1 = juniorHunter->huntBirds();
    birds1->who();
    Beast *beast1 = juniorHunter->huntBeast();
    beast1->who();

    Hunter *seniorHunter = new SeniorHunter();
    Birds *birds2 = seniorHunter->huntBirds();
    birds2->who();
    Beast *beast2 = juniorHunter->huntBeast();
    beast2->who();

    delete juniorHunter;
    delete seniorHunter;
    delete birds1;
    delete birds2;
    return 0;
}