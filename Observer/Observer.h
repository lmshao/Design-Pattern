// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#ifndef OBSERVER_H
#define OBSERVER_H

#include <list>
#include <string>

class Subscriber
{
  public:
    Subscriber() = default;

    virtual ~Subscriber() = default;
    virtual void update() = 0;
};

class Newspaper
{
  public:
    Newspaper() = default;
    virtual ~Newspaper() = default;

    void attach(Subscriber *subscriber);
    void remove(Subscriber *subscriber);
    void notify();

    virtual void setNews(std::string s);
    virtual std::string getNews();

  private:
    std::list<Subscriber *> _subscribers;
    std::string _news;
};

class ChinaDaily : public Newspaper
{
  public:
    explicit ChinaDaily(std::string title);
    ~ChinaDaily() override = default;

    void setNews(std::string s) override;
    std::string getNews() override;

  private:
    std::string _news;
};

class User : public Subscriber
{
  public:
    User(std::string name, Newspaper *newspaper);
    ~User() override = default;

    void update() override;

  private:
    std::string _name;
    Newspaper *_newspaper;
};

#endif  // OBSERVER_H
