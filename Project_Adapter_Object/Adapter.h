#pragma once

// 目标接口
class Target {
public:
	Target();
	virtual ~Target();
	virtual void Request();// 目标接口，定义客户端期望的统一接口
protected:
private:
};


// 一个适配者对应一个适配器
// 适配者
class Adaptee {
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();// 适配者的特有接口，与Target接口不兼容
protected:
private:
};
// 类适配器：继承Target（符合目标接口），私有继承Adaptee（复用其功能）
class Adapter :public Target {
public:
	Adapter(Adaptee* ade); // 通过构造函数注入适配者对象
	~Adapter();
	void Request() override;// 重写Target的接口，内部调用Adaptee的特有接口
protected:
private:
	Adaptee* _ade = nullptr; // 持有适配者对象，而非继承
};