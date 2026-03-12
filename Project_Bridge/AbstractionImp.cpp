#include "AbstractionImp.h" 
#include <iostream>
using namespace std;
AbstractionImp::AbstractionImp() = default;
AbstractionImp::~AbstractionImp() = default;
void AbstractionImp::Operation()
{
	cout << "AbstractionImp....imp..." << endl;
}
ConcreteAbstractionImpA::ConcreteAbstractionImpA() = default;
ConcreteAbstractionImpA::~ConcreteAbstractionImpA() = default;
void ConcreteAbstractionImpA::Operation()
{
	cout << "ConcreteAbstractionImpA...." << endl;
}
ConcreteAbstractionImpB::ConcreteAbstractionImpB() = default;
ConcreteAbstractionImpB::~ConcreteAbstractionImpB() = default;
void ConcreteAbstractionImpB::Operation()
{
	cout << "ConcreteAbstractionImpB...." << endl;
}