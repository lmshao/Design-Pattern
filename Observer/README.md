# 观察者模式

 当对象间存在一对多关系时，则使用观察者模式（Observer Pattern）。比如，当一个对象被修改时，则会自动通知它的依赖对象。观察者模式属于行为型模式。

 示例中的报纸`Newspaper`类作为一个被观察的对象，中国日报`ChinaDaily`类继承报纸类，实现自己的特性。   
 订阅者`Subscriber`作为被通知的对象，每当报纸有新闻就会被通知。

测试用例
 ```cpp
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
 ```
 输出
 ```txt
 > Breaking News <
 Mike received a newspaper:
 ChinaDaily 2019-1-1 Today is New Year's Day.
 Lucy received a newspaper:
 ChinaDaily 2019-1-1 Today is New Year's Day.
 ```