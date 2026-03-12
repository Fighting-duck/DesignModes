#pragma once

#include "AbstractionImp.h"

// ³éÏóÎ¬¶È
class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;
protected:
	Abstraction();
private:
};
class RefinedAbstraction :public Abstraction
{
public:
	RefinedAbstraction(AbstractionImp* imp);
	~RefinedAbstraction();
	void Operation();
protected:
private:
	AbstractionImp* _imp = nullptr;
};