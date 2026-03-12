#define _CRT_SECURE_NO_WARNINGS
#include "AbstractMonsterFactory.h"
#include "Player.h"
#include <windows.h> 

#include<iostream>
using namespace std;

int main() {
	// 设置控制台编码为 GBK（匹配VS默认编码）
	SetConsoleOutputCP(936);
	SetConsoleCP(936);

	PlayerSigleton* player = PlayerSigleton::Instance();

	AbstractFactory* cf1 = new ConcreteFactory_primary();
	AbstractMonsterA* monsterA_primary = cf1->CreateMonsterA();
	AbstractMonsterB* monsterB_primary = cf1->CreateMonsterB();

	AbstractFactory* cf2 = new ConcreteFactory_middle();
	AbstractMonsterA* monsterA_midddle = cf2->CreateMonsterA();
	AbstractMonsterB* monsterB_middle = cf2->CreateMonsterB();

	AbstractFactory* cf3 = new ConcreteFactory_high();
	AbstractMonsterA* monsterA_high = cf3->CreateMonsterA();
	AbstractMonsterB* monsterB_high = cf3->CreateMonsterB();

	AbstractFactory* cf4 = new ConcreteFactory_BT();
	AbstractMonsterA* monsterA_BT = cf4->CreateMonsterA();
	AbstractMonsterB* monsterB_BT = cf4->CreateMonsterB();

	// 释放内存（避免内存泄漏）
	delete monsterA_primary;
	delete monsterB_primary;
	delete cf1;
	delete monsterA_midddle;
	delete monsterB_middle;
	delete cf2;
	delete monsterA_high;
	delete monsterB_high;
	delete cf3;
	delete monsterA_BT;
	delete monsterB_BT;
	delete cf4;


	return 0;
}