#pragma once

// 子系统1
class Subsystem1{
public:
	Subsystem1();
	~Subsystem1();
	void Operation();
protected:
private:
};

// 子系统2
class Subsystem2{
public:
	Subsystem2();
	~Subsystem2();
	void Operation();
protected:
private:
};

/**
 * @brief 外观类（Facade）
 * 为复杂的子系统提供统一的高层接口，封装子系统的交互逻辑，简化客户端调用
 */
class Facade{
public:
	Facade();
	~Facade();
	/**
	 * @brief 统一的业务入口（门面接口）
	 * 封装子系统1和子系统2的调用逻辑，客户端只需调用此方法
	 */
	void OperationWrapper();
protected:
private:
	Subsystem1* _subs1 = nullptr;
	Subsystem2* _subs2 = nullptr;
};