#include "Adapter.h"

#include<iostream>
using namespace std;

// 对象适配器模式

int main(int argc, char* argv[]) {
	Adaptee* ade = new Adaptee();
	Adapter* adt = new Adapter(ade);
	adt->Request();

	delete adt;
	delete ade;

	return 0;
}