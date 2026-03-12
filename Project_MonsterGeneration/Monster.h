#pragma once

#include<map>
#include<string>
using namespace std;

class Monster {
public:
	float _health = 0.0f;// 血量
	float _mana = 0.0f;//蓝条
	map<string, float> _skills;// 技能表（技能名，技能威力）
protected:
	Monster(float health, float mana, map<string, float> skills) : _health(health), _mana(mana),_skills(skills) {} // 保护构造，仅子类可调用
	~Monster() = default;
	void displayInfo();
private:
	
};
// 抽象怪物A
class AbstractMonsterA :public  Monster {
public:
	
	virtual ~AbstractMonsterA(); // 虚析构函数，确保子类析构被调用
protected:
	AbstractMonsterA(float health,float mana, map<string, float> _skills); // 保护构造函数，禁止直接实例化抽象类
private:
};

// 抽象怪物B
class AbstractMonsterB :public  Monster {
public:
	virtual ~AbstractMonsterB();
protected:
	AbstractMonsterB(float health, float mana, map<string, float> _skills);
private:
};

// 初级怪兽A
class MonsterA_primary :public AbstractMonsterA {
public:
	MonsterA_primary();
	~MonsterA_primary() override;
protected:
private:
};

// 中级怪兽A
class MonsterA_middle :public AbstractMonsterA {
public:
	MonsterA_middle();
	~MonsterA_middle() override;
protected:
private:
};

// 高级怪兽A
class MonsterA_high :public AbstractMonsterA {
public:
	MonsterA_high();
	~MonsterA_high() override;
protected:
private:
};

// 变态级怪兽A
class MonsterA_BT :public AbstractMonsterA {
public:
	MonsterA_BT();
	~MonsterA_BT() override;
protected:
private:
};



// 初级怪兽B
class MonsterB_primary :public AbstractMonsterB {
public:
	MonsterB_primary();
	~MonsterB_primary() override;
protected:
private:
};

// 高级怪兽B
class MonsterB_middle :public AbstractMonsterB {
public:
	MonsterB_middle();
	~MonsterB_middle() override;
protected:
private:
};

// 高级怪兽B
class MonsterB_high :public AbstractMonsterB {
public:
	MonsterB_high();
	~MonsterB_high() override;
protected:
private:
};

// 变态级怪兽B
class MonsterB_BT :public AbstractMonsterB {
public:
	MonsterB_BT();
	~MonsterB_BT() override;
protected:
private:
};