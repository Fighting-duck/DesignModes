#include "Abstraction.h" 
#include "AbstractionImp.h" 
#include <iostream>
using namespace std;
Abstraction::Abstraction() = default;
Abstraction::~Abstraction() = default;
RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp){
	_imp = imp;
}
RefinedAbstraction::~RefinedAbstraction(){
	_imp = nullptr;
}
void RefinedAbstraction::Operation(){
	_imp->Operation();
}