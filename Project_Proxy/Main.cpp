#include "Proxy.h" 

#include <windows.h> 
#include <iostream>
using namespace std;

// Proxy Pattern: 代理模式
// 定义：为其他对象提供一种代理以控制对这个对象的访问

int main(int argc, char* argv[]){
	// 设置控制台编码为 GBK（匹配VS默认编码）
	SetConsoleOutputCP(936);
	SetConsoleCP(936);

	// 1. 创建真实对象
	Subject* sub = new ConcreteSubject();
	// 2. 创建代理对象，包装真实对象
	Proxy* p = new Proxy(sub);
	// 3. 客户端通过代理访问真实对象的功能
	p->Request();

	delete p;
	delete sub;
	return 0;
}