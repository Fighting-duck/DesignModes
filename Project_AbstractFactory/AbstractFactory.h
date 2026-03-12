#pragma once

#include "Product.h"

// 抽象工厂类
class AbstractFactory {
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* CreateProductA() = 0; // 纯虚函数：创建产品A
	virtual AbstractProductB* CreateProductB() = 0; // 纯虚函数：创建产品B
protected:
	AbstractFactory();  // 保护构造函数，禁止直接实例化
private: 
};

// 具体工厂1
class ConcreteFactory1 :public AbstractFactory {
public:
	ConcreteFactory1();
	~ConcreteFactory1() override;
	AbstractProductA* CreateProductA() override;
	AbstractProductB* CreateProductB() override;
protected:
private:
};

// 具体工厂2
class ConcreteFactory2 :public AbstractFactory {
public:
	ConcreteFactory2();
	~ConcreteFactory2() override;
	AbstractProductA* CreateProductA() override;
	AbstractProductB* CreateProductB() override;
protected:
private:
};