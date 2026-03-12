#include "Monster.h"

#include<iostream>
using namespace std;

void Monster::displayInfo() {
	cout<< "血量 = " << _health << "，蓝条 = " << _mana ;
	map<string, float>::const_iterator it;
	for (it = _skills.begin(); it != _skills.end(); ++it) {
		cout << ",{ 技能名：" << it->first << "，威力：" << it->second<<"} ";
	}
	cout << endl;
}

AbstractMonsterA::AbstractMonsterA(float health, float mana, map<string, float> skills) :Monster(health, mana, skills) {
}
AbstractMonsterA::~AbstractMonsterA() {

}

AbstractMonsterB::AbstractMonsterB(float health, float mana, map<string, float> skills) :Monster(health, mana, skills) {
}
AbstractMonsterB::~AbstractMonsterB() {

}

MonsterA_primary::MonsterA_primary():AbstractMonsterA(200.0f, 100.0f,{ {"普攻", 10.0f}, {"技能1", 20.0f} }) {
	cout << "初级级怪兽A创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterA_primary::~MonsterA_primary() {

}

MonsterA_middle::MonsterA_middle() :AbstractMonsterA(400.0f, 200.0f, { {"普攻", 20.0f}, {"技能1", 40.0f} }) {
	cout << "中级级怪兽A创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterA_middle::~MonsterA_middle() {

}

MonsterA_high::MonsterA_high() :AbstractMonsterA(800.0f, 400.0f, { {"普攻", 40.0f}, {"技能1", 80.0f} }) {
	cout << "高级级怪兽A创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterA_high::~MonsterA_high() {

}

MonsterA_BT::MonsterA_BT() :AbstractMonsterA(1600.0f, 600.0f, { {"普攻", 80.0f}, {"技能1", 160.0f} }) {
	cout << "史诗级怪兽A创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterA_BT::~MonsterA_BT() {

}

MonsterB_primary::MonsterB_primary() : AbstractMonsterB(150.0f, 75.0f, { {"普攻", 15.0f}, {"技能1", 30.0f},{"技能2", 45.0f} }) {
	cout << "初级级怪兽B创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterB_primary::~MonsterB_primary() {

}

MonsterB_middle::MonsterB_middle() : AbstractMonsterB(300.0f, 150.0f, { {"普攻", 30.0f}, {"技能1", 60.0f},{"技能2", 90.0f} }) {
	cout << "中级怪兽B创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterB_middle::~MonsterB_middle() {

}

MonsterB_high::MonsterB_high() : AbstractMonsterB(450.0f, 125.0f, { {"普攻", 50.0f}, {"技能1", 80.0f},{"技能2", 120.0f} }) {
	cout << "高级怪兽B创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterB_high::~MonsterB_high() {

}

MonsterB_BT::MonsterB_BT() : AbstractMonsterB(600.0f, 180.0f, { {"普攻", 90.0f}, {"技能1", 160.0f},{"技能2", 200.0f} }) {
	cout << "史诗级怪兽B创建" << endl;
	// 打印血条、蓝条、技能信息
	displayInfo();
}
MonsterB_BT::~MonsterB_BT() {

}

