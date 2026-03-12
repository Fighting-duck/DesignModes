#pragma once

#include "Flyweight.h" 
#include <string> 
#include <vector> 
using namespace std;

/**
 * @brief 享元工厂类
 * 管理享元对象池，负责创建/复用享元对象，避免重复实例化
 */
class FlyweightFactory{
public:
	FlyweightFactory();
	~FlyweightFactory();
	Flyweight* GetFlyweight(const string& key); // 获取享元对象
protected:
private:
	vector<Flyweight*> _fly;// 享元对象池（存储已创建的享元对象）
};