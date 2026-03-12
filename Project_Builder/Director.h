#pragma once

#include "Builder.h"

// 指挥者：控制建造流程
class Director {
public:
	Director(Builder* bld);
	~Director();
	void Construct();// 定义建造流程
protected:
private:
	Builder* _bld;
};