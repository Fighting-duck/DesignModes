#include "Composite.h"
#include "Component.h"

#include <iostream>
using namespace std;

Composite::Composite() = default;
Composite::~Composite() {
	// 释放所有子节点内存，避免内存泄漏
	for (auto* com : _comVec) {
		delete com;
		com = nullptr;
	}
	_comVec.clear();
}
void Composite::Operation() {
	cout << "Composite operation: 执行所有子组件的操作" << endl;
	// 遍历执行所有子组件的 Operation
	for (auto* com : _comVec){
		com->Operation();
	}
}
void Composite::Add(Component* com) {
	if(com != nullptr)
		_comVec.push_back(com);
}
void Composite::Remove(Component* com) {
	// 遍历找到要删除的组件，通过迭代器擦除
	for (auto it = _comVec.begin(); it != _comVec.end(); ++it) {
		if (*it == com) {
			_comVec.erase(it);
			break; // 假设每个组件只存一次，找到后退出
		}
	}
}
Component* Composite::GetChild(int index) {
	// 边界检查，避免越界访问
	if (index >= 0 && index < _comVec.size()) {
		return _comVec[index];
	}
	return nullptr;
}