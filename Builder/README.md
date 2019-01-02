# 建造者模式

建造者模式（Builder Pattern）使用多个简单的对象一步一步构建成一个复杂的对象。这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。
一个 Builder 类会一步一步构造最终的对象。该 Builder 类是独立于其他对象的。

示例有课程类型`CourseType`类，高中课程`SeniorClass`继承`CourseType`类。
导演`Director`类相当于教导主任，他给排课，设计了两个课程表。

```cpp
Director *dt = new Director(new SeniorClass());
dt->getClassScheduleA();
dt->getClassScheduleB();
delete dt;
```
输出
```txt
Enter CourseType
Enter SeniorClass
Enter Director

The Schedule of Class 1
Chinese Class
English Class
Math Class

The Schedule of Class 2
English Class
Math Class
Chinese Class

Leave Director
Leave SeniorClass
Leave CourseType
```
 