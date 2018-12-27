# 工厂模式

玩具工厂类 `ToyFactory` 继承工厂类 `Factory`，玩具产品类 `Toy` 继承产品类 `Product`。   
`Factory`类和`Product`类的析构函数都是纯虚函数。

```cpp
Factory *factory = new ToyFactory();
```
执行顺序为：
Factory构造函数 -> ToyFactory构造函数

```cpp
Product *product = factory->createProduct();
```
Factory类的createProduct()为纯虚函数，直接执行ToyFactory类的createProduct()。

```cpp
delete factory;
```
执行顺序为：
ToyFactory析构函数 -> Factory析构函数

```cpp
delete product;
```
执行顺序为：
Toy析构函数 -> Product析构函数

## 注释
- 构造函数不能是虚函数。 
- 将一个函数定义为纯虚函数，实际上是将这个类定义为抽象类，不能实例化对象。
- 纯虚函数通常没有定义体，但是也可以有定义体。但是纯虚析构函数一定要有定义体。