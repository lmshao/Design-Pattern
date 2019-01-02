// Copyright (c) 2017 Liming Shao <lmshao@163.com>

#ifndef BUILDER_H
#define BUILDER_H

class CourseType {
  public:
    virtual ~CourseType();
    virtual void MathClass() = 0;
    virtual void EnglishClass() = 0;
    virtual void ChineseClass() = 0;

  protected:
    CourseType();
};

class SeniorClass : public CourseType {
  public:
    SeniorClass();
    ~SeniorClass() override;
    void MathClass() override;
    void EnglishClass() override;
    void ChineseClass() override;
};

class Director {
  public:
    explicit Director(CourseType *ct);
    ~Director();
    void getClassScheduleA();
    void getClassScheduleB();

  private:
    CourseType *ct;
};

#endif