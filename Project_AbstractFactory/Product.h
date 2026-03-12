#pragma once

// 抽象产品A
class AbstractProductA {
public:
	virtual ~AbstractProductA(); // 虚析构函数，确保子类析构被调用
protected:
	AbstractProductA(); // 保护构造函数，禁止直接实例化抽象类
private:
};

// 抽象产品B
class AbstractProductB {
public:
	virtual ~AbstractProductB();
protected:
	AbstractProductB();
private:
};

// 具体产品A1
class ProductA1 :public AbstractProductA {
public:
	ProductA1();
	~ProductA1() override;
protected:
private:
};

// 具体产品A2
class ProductA2 :public AbstractProductA {
public:
	ProductA2();
	~ProductA2() override;
protected:
private:
};


// 具体产品B1
class ProductB1 :public AbstractProductB {
public:
	ProductB1();
	~ProductB1() override;
protected:
private:
};

// 具体产品B2
class ProductB2 :public AbstractProductB {
public:
	ProductB2();
	~ProductB2() override;
protected:
private:
};