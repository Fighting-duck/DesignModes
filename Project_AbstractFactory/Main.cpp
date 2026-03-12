#include "AbstractFactory.h"

#include<iostream>
using namespace std;

int main() {
	AbstractFactory* cf1 = new ConcreteFactory1();
	AbstractMonsterA* proA1 = cf1->CreateProductA();
	AbstractMonsterB* proB1 = cf1->CreateProductB();

	AbstractFactory* cf2 = new ConcreteFactory2();
	AbstractMonsterA* proA2 = cf2->CreateProductA();
	AbstractMonsterB* proB2 = cf2->CreateProductB();

	// ÊÍ·ÅÄÚ´æ£¨±ÜÃâÄÚ´æĞ¹Â©£©
	delete proA1;
	delete proB1;
	delete cf1;
	delete proA2;
	delete proB2;
	delete cf2;


	return 0;
}