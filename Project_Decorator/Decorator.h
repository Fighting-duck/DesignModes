#pragma once

// 抽象组件
class Component {
public:
	virtual ~Component();
	virtual void Operation() = 0;// 纯虚函数，强制子类实现
protected:
	Component();
private:
};

// 具体组件
class ConcreteComponnet :public Component {
public:
	ConcreteComponnet();
	~ConcreteComponnet();
	void Operation() override;
protected:
private:
};

// 装饰器基类
class Decorator :public Component{
public:
	Decorator(Component* ocm);
	virtual ~Decorator();
	void Operation() override;
protected:
	Component* _com = nullptr; // 初始化空指针，避免野指针
private:
};

// 具体装饰器：添加额外行为
class ConcreteDecorator :public Decorator {
public:
	ConcreteDecorator(Component* com);
	~ConcreteDecorator();
	void Operation() override; // 重写以增强功能
	void AddedBehavior(); // 额外扩展的行为
protected:
private:
};