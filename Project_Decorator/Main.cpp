#include "Decorator.h"

#include<iostream>
using namespace std;

// ×°ÊÎÆ÷Ä£Ê½

int main(int argc, char* argv[]) {
	Component* com = new ConcreteComponnet();
	Decorator* dec = new ConcreteDecorator(com);
	dec->Operation();

	delete dec;
	delete com;
	return 0;
}