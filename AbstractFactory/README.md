## 抽象工厂模式
这个例子描述了猎人打猎鸟类的故事。
高级猎人`SeniorHunter`和初级猎人`JuniorHunter`都继承猎人`Hunter`类，猎物老鹰`Eagle`和麻雀`Sparrow`都继承鸟类`Birds`。   
高级猎人捕获老鹰，初级猎人捕捉麻雀。 

```cpp
Hunter *juniorHunter = new JuniorHunter();
Birds *birds1 = juniorHunter->whatBirdsToHunt();
birds1->who();

Hunter *seniorHunter = new SeniorHunter();
Birds *birds2 = seniorHunter->whatBirdsToHunt();
birds2->who();

delete juniorHunter;
delete seniorHunter;
delete birds1;
delete birds2;
```
输出如下
```txt
Hunter::Hunter()
JuniorHunter::JuniorHunter()
I caught a sparrow.
Birds::Birds()
Sparrow::Sparrow()
I am a Sparrow.

Hunter::Hunter()
SeniorHunter::SeniorHunter()
I caught an eagle.
Birds::Birds()
Eagle::Eagle()
I am an Eagle.

JuniorHunter::~JuniorHunter()
Hunter::~Hunter()

SeniorHunter::~SeniorHunter()
Hunter::~Hunter()

Sparrow::~Sparrow()
Birds::~Birds()

Eagle::~Eagle()
Birds::~Birds()
```