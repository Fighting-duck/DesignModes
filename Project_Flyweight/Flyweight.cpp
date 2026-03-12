#include "Flyweight.h" 
#include <iostream>
using namespace std;
Flyweight::Flyweight(string intrinsicState){
	this->_intrinsicState = intrinsicState;
}
Flyweight::~Flyweight(){
}
void Flyweight::Operation(const string& extrinsicState){
}
// 获取内部状态
string Flyweight::GetIntrinsicState(){
	return this->_intrinsicState;
}


ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) :Flyweight(intrinsicState){
	cout << "ConcreteFlyweight Build....." << intrinsicState << endl;
}
ConcreteFlyweight::~ConcreteFlyweight(){
}
void ConcreteFlyweight::Operation(const string& extrinsicState){
	cout << "ConcreteFlyweight:内蕴[" << this->GetIntrinsicState() << "] 外蕴["<<extrinsicState<<"]"<<endl; 
}