#pragma once

#include "Monster.h"

// 抽象工厂类
class AbstractFactory {
public:
	virtual ~AbstractFactory();
	virtual AbstractMonsterA* CreateMonsterA() = 0; // 纯虚函数：创建怪兽A
	virtual AbstractMonsterB* CreateMonsterB() = 0; // 纯虚函数：创建怪兽B
protected:
	AbstractFactory();  // 保护构造函数，禁止直接实例化
private:
};

// 具体工厂1
class ConcreteFactory_primary :public AbstractFactory {
public:
	ConcreteFactory_primary();
	~ConcreteFactory_primary() override;
	AbstractMonsterA* CreateMonsterA() override;
	AbstractMonsterB* CreateMonsterB() override;
protected:
private:
};

// 具体工厂2
class ConcreteFactory_middle :public AbstractFactory {
public:
	ConcreteFactory_middle();
	~ConcreteFactory_middle() override;
	AbstractMonsterA* CreateMonsterA() override;
	AbstractMonsterB* CreateMonsterB() override;
protected:
private:
};

// 具体工厂2
class ConcreteFactory_high :public AbstractFactory {
public:
	ConcreteFactory_high();
	~ConcreteFactory_high() override;
	AbstractMonsterA* CreateMonsterA() override;
	AbstractMonsterB* CreateMonsterB() override;
protected:
private:
};

// 具体工厂2
class ConcreteFactory_BT :public AbstractFactory {
public:
	ConcreteFactory_BT();
	~ConcreteFactory_BT() override;
	AbstractMonsterA* CreateMonsterA() override;
	AbstractMonsterB* CreateMonsterB() override;
protected:
private:
};