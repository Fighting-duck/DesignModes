#include "Adapter.h"

#include<iostream>
using namespace std;

// 类适配器模式

int main(int argc, char* argv[]) {
	/*Adaptee* ade = new Adaptee();
	Adapter* adt = new Adapter();
	adt->Request();*/
	Target* adt = new Adapter();// 客户端只依赖Target抽象类，不感知Adaptee的存在
	adt->Request();// 调用Target接口，实际执行Adapter适配后的逻辑

	delete adt;

	return 0;
}