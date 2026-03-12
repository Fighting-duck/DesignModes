#include "Prototype.h"

#include<iostream>
using namespace std;

// 原型模式：用一个已经创建的实例（原型）作为模板，通过复制（克隆） 这个原型来创建新的对象，而不是通过 new 关键字从头初始化。
// 优势：当对象的创建成本很高（比如初始化需要读取文件、连接数据库、复杂计算）时，克隆可以大幅提升创建效率。

int main(int argc, char* argv[]) {
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();

	delete p1;
	delete p;
	return 0;
}