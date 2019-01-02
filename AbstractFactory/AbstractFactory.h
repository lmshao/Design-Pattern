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

class Beast
{
public:
    virtual ~Beast();
    virtual void who() = 0;

protected:
    Beast();
};

class Wolf : public Beast
{
public:
    Wolf();
    ~Wolf() override;
    void who() override;
};

class Tiger : public Beast
{
public:
    Tiger();
    ~Tiger() override;
    void who() override;
};

//------ What kind of prey can hunters hunt? ------

class Hunter
{
  public:
    virtual ~Hunter();
    virtual Birds *huntBirds() = 0;
    virtual Beast *huntBeast() = 0;

  protected:
    Hunter();
};

class JuniorHunter : public Hunter
{
  public:
    JuniorHunter();
    ~JuniorHunter() override;
    Birds *huntBirds() override;
    Beast *huntBeast();
};

class SeniorHunter : public Hunter
{
  public:
    SeniorHunter();
    ~SeniorHunter() override;
    Birds *huntBirds() override;
    Beast *huntBeast();
};

#endif
