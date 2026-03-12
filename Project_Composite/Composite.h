#pragma once

#include "Component.h"
#include<vector>
using namespace std;

// 组合节点类
// 管理多个子组件并批量执行操作
class Composite :public Component {
public:
	Composite();
	~Composite() override;
public:
	void Operation() override;  // 执行组合节点的操作
	void Add(Component* com) override; // 添加子组件
	void Remove(Component* com) override;// 移除子组件
	Component* GetChild(int index) override; // 获取指定索引的子组件
protected:
private:
	vector<Component*> _comVec;  // 存储子组件的容器：可存放叶子节点或其他组合节点的指针
};
