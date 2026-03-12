#include "Prototype.h"

#include<iostream>
using namespace std;

Prototype::Prototype() {

}
Prototype::~Prototype() {

}

Prototype* Prototype::Clone() const {
	return 0;
}

ConcretePrototype::ConcretePrototype() {

}

ConcretePrototype::~ConcretePrototype() {

}

// 具体原型的拷贝构造函数（核心：克隆时会调用）
ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp) {
	cout << "ConcretePrototype copy" << endl;
}

// 具体原型的克隆方法（核心：通过拷贝构造创建新对象）
Prototype* ConcretePrototype::Clone() const {
	return new ConcretePrototype(*this); // 拷贝当前对象，返回基类指针
}