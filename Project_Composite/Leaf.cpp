#include "Leaf.h"

#include<iostream>
using namespace std;

Leaf::Leaf() = default;
Leaf::~Leaf() = default;

void Leaf::Operation(){
	cout << "Leaf operation: 叶子节点的具体操作" << endl;
}