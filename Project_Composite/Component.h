#pragma once

// 组件基类
class Component {
public:
	Component();
	virtual ~Component();
public:
	virtual void Operation() = 0;
	virtual void Add(Component* com); // 添加组件
	virtual void Remove(Component* com);// 删除组件
	virtual Component* GetChild(int index);// 获取索引处组件
protected:
private:
};

