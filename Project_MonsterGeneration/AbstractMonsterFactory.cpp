#include "AbstractMonsterFactory.h"
#include "Monster.h"

#include<iostream>
using namespace std;

AbstractFactory::AbstractFactory() {

}
AbstractFactory::~AbstractFactory() {

}

ConcreteFactory_primary::ConcreteFactory_primary() {

}
ConcreteFactory_primary::~ConcreteFactory_primary() {

}
AbstractMonsterA* ConcreteFactory_primary::CreateMonsterA() {
	return new MonsterA_primary();
}
AbstractMonsterB* ConcreteFactory_primary::CreateMonsterB() {
	return new MonsterB_primary();
}

ConcreteFactory_middle::ConcreteFactory_middle() {

}
ConcreteFactory_middle::~ConcreteFactory_middle() {

}
AbstractMonsterA* ConcreteFactory_middle::CreateMonsterA() {
	return new MonsterA_middle();
}
AbstractMonsterB* ConcreteFactory_middle::CreateMonsterB() {
	return new MonsterB_middle();
}


ConcreteFactory_high::ConcreteFactory_high() {

}
ConcreteFactory_high::~ConcreteFactory_high() {

}
AbstractMonsterA* ConcreteFactory_high::CreateMonsterA() {
	return new MonsterA_high();
}
AbstractMonsterB* ConcreteFactory_high::CreateMonsterB() {
	return new MonsterB_high();
}


ConcreteFactory_BT::ConcreteFactory_BT() {

}
ConcreteFactory_BT::~ConcreteFactory_BT() {

}
AbstractMonsterA* ConcreteFactory_BT::CreateMonsterA() {
	return new MonsterA_BT();
}
AbstractMonsterB* ConcreteFactory_BT::CreateMonsterB() {
	return new MonsterB_BT();
}