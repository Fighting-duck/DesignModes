#pragma once

#include "Component.h"

// 叶子节点类
// 表示组合结构中的“最小单元”，无子组件，仅实现核心操作
class Leaf :public Component {
public:
	Leaf();
	~Leaf() override;
	void Operation() override; // 实现叶子节点的具体操作
protected:
private:
};