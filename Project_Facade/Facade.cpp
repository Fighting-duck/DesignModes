#include "Facade.h" 
#include <iostream> 
using namespace std;
Subsystem1::Subsystem1(){
}
Subsystem1::~Subsystem1(){
}
void Subsystem1::Operation(){
	cout << "Subsystem1 operation.." << endl;
}
Subsystem2::Subsystem2(){
}
Subsystem2::~Subsystem2(){
}
void Subsystem2::Operation(){
	cout << "Subsystem2 operation.." << endl;
}

Facade::Facade(){
	// 初始化所有子系统对象
	this->_subs1 = new Subsystem1();
	this->_subs2 = new Subsystem2();
}
Facade::~Facade(){
	// 释放子系统对象，避免内存泄漏
	delete _subs1;
	delete _subs2;
	// 后置空指针，避免野指针
	_subs1 = nullptr;
	_subs2 = nullptr;
}
void Facade::OperationWrapper(){
	// 封装子系统的调用逻辑（可按业务顺序组合多个子系统方法）
	this->_subs1->Operation();
	this->_subs2->Operation();
}