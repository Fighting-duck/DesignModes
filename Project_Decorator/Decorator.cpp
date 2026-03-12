#include "Decorator.h"

#include<iostream>
using namespace std;

Component::Component() = default;
Component::~Component() = default;
void Component::Operation() {

}

ConcreteComponnet::ConcreteComponnet() = default;
ConcreteComponnet::~ConcreteComponnet() = default;
void ConcreteComponnet::Operation() {
	cout << "ConcreteComponnet::Operation..." << endl;
}

Decorator::Decorator(Component* com) {
	this->_com = com;
}
Decorator::~Decorator() {
	_com = nullptr; // 仅置空指针，不释放组件（避免重复释放）
}
void Decorator::Operation() {
	if (_com != nullptr) {
		_com->Operation();
	}
}

ConcreteDecorator::ConcreteDecorator(Component* com):Decorator(com) {}
ConcreteDecorator::~ConcreteDecorator() = default;
void ConcreteDecorator::AddedBehavior() {
	cout << "ConcreteDecorator::AddedBehavior..." << endl;
}
void ConcreteDecorator::Operation() {
	Decorator::Operation(); // 调用父类的Operation
	this->AddedBehavior();  // 执行扩展行为
}