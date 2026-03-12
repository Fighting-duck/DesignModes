#include "Adapter.h"


#include<iostream>
using namespace std;

Target::Target() = default;
Target::~Target() = default;
void Target::Request() {
	cout << "Target::Request" << endl;
}

Adaptee::Adaptee() = default;
Adaptee::~Adaptee() = default;
void Adaptee::SpecificRequest() {
	cout << "Adaptee::SpecificRequest" << endl;
}

Adapter::Adapter(Adaptee* ade) {
	this->_ade = ade;
}
Adapter::~Adapter() {
	this->_ade = nullptr;
}
void Adapter::Request() {
	this->_ade->SpecificRequest();
}