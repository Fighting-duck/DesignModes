#pragma once

#include <string> 
using namespace std;

/**
 * @brief 抽象享元类
 * 定义享元对象的接口，包含内部状态管理和外部状态处理方法
 */
class Flyweight{
public:
	virtual ~Flyweight();
	virtual void Operation(const string& extrinsicState); // 处理外部状态
	string GetIntrinsicState(); // 获取内部状态
protected:
	Flyweight(string intrinsicState);
private:
	string _intrinsicState;
};

// 具体享元类
class ConcreteFlyweight :public Flyweight{
public:
	ConcreteFlyweight(string intrinsicState);
	~ConcreteFlyweight() override;
	void Operation(const string& extrinsicState) override; 
protected:
private:
};