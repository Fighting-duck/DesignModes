#include "Builder.h"
#include "Director.h"


#include<iostream>
using namespace std;

Director::Director(Builder* bld) {
	_bld = bld;
}

Director::~Director() {
	delete _bld; // 释放建造者内存
}

void Director::Construct() {
	// 指挥者指定建造顺序和参数
	_bld->BuildPartA("use-defined");
	_bld->BuildPartB("use-defined");
	_bld->BuildPartC("use-defined");

	// 获取产品并展示
	Product* product = _bld->GetProduct();
	product->ShowProduct();
}