// Copyright (c) 2018 Liming Shao <lmshao@163.com>

#include "Observer.h"
#include <iostream>

void Newspaper::attach(Subscriber *subscriber)
{
    _subscribers.push_back(subscriber);
}

void Newspaper::remove(Subscriber *subscriber)
{
    _subscribers.remove(subscriber);
}

void Newspaper::notify()
{
    auto iter = _subscribers.begin();
    for (; iter != _subscribers.end(); iter++) {
        (*iter)->update();
    }
}

void Newspaper::setNews(std::string s)
{
    _news = std::move(s);
    std::cout << "> Breaking News < " << std::endl;
}

std::string Newspaper::getNews()
{
    return _news;
}

ChinaDaily::ChinaDaily(std::string title) : _news(std::move(title)) {}

void ChinaDaily::setNews(std::string s)
{
    Newspaper::setNews("ChinaDaily " + _news + " " + s);
}

std::string ChinaDaily::getNews()
{
    return Newspaper::getNews();
}

User::User(std::string name, Newspaper *newspaper) : _name(std::move(name)), _newspaper(newspaper) {}

void User::update()
{
    std::string news = _newspaper->getNews();
    std::cout << _name << " received a newspaper:\n"
              << news << std::endl;
}
