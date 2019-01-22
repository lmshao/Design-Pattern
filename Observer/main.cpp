#include "Observer.h"
#include <iostream>

int main()
{
    Newspaper *newspaper = new ChinaDaily("2019-1-1");
    Subscriber *mike = new User("Mike", newspaper);
    newspaper->attach(mike);
    Subscriber *lucy = new User("Lucy", newspaper);
    newspaper->attach(lucy);

    newspaper->setNews("Today is New Year's Day.");
    newspaper->notify();

    delete newspaper;
    delete mike;
    delete lucy;
    return 0;
}