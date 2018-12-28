// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

// <JuniorHunter, SeniorHunter> [Hunter]  hunts <Sparrow, Eagle> [Birds]

//------ different kinds of prey ------

class Birds
{
  public:
    virtual ~Birds();
    virtual void who() = 0;

  protected:
    Birds();
};

class Sparrow : public Birds
{
  public:
    Sparrow();
    ~Sparrow() override;
    void who() override;
};

class Eagle : public Birds
{
  public:
    Eagle();
    ~Eagle() override;
    void who() override;
};


//------ What kind of prey can hunters hunt? ------

class Hunter
{
  public:
    virtual ~Hunter();
    virtual Birds *whatBirdsToHunt() = 0;

  protected:
    Hunter();
};

class JuniorHunter : public Hunter
{
  public:
    JuniorHunter();
    ~JuniorHunter() override;
    Birds *whatBirdsToHunt() override;
};

class SeniorHunter : public Hunter
{
  public:
    SeniorHunter();
    ~SeniorHunter() override;
    Birds *whatBirdsToHunt() override;
};

#endif
