#pragma once

// 抽象主题类：定义真实对象和代理对象的统一接口
class Subject
{
public:
	virtual ~Subject();
	virtual void Request() = 0;
protected:
	Subject();
private:
};

// 具体主题类：实现真实业务逻辑
class ConcreteSubject :public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject() override;
	void Request() override;// 重写接口，实现具体业务
protected:
private:
};

// 代理类：继承Subject，与真实对象保持接口一致，控制对真实对象的访问
class Proxy{
public:
	Proxy();
	Proxy(Subject* sub);
	~Proxy();
	void Request();
protected:

private:
	Subject* _sub = nullptr;
};