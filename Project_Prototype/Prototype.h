#pragma once



// 抽象原型类
class Prototype {
public:
	virtual ~Prototype();
	virtual Prototype* Clone() const= 0; // 纯虚函数，克隆接口
protected:
	Prototype();// 保护构造函数，防止直接实例化
	Prototype(const Prototype&); // 保护拷贝构造，防止外部拷贝
	Prototype& operator=(const Prototype&); // 保护赋值运算符
private:
};

// 具体原型类
class ConcretePrototype :public Prototype {
public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype& cp); // 拷贝构造函数
	~ConcretePrototype();
	Prototype* Clone() const override;// 实现克隆方法
protected:

private:
};