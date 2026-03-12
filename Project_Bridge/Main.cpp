#include "Abstraction.h" 
#include "AbstractionImp.h" 
#include <iostream>
using namespace std;

// Bridge mode 桥接模式
// 核心是将抽象部分与实现部分分离，使它们可以独立变化
// 分离抽象与实现：抽象层（Abstration、RefinedAbstration）不依赖具体实现，
//                 实现层(ConcreteAbstrationImpA/B)也不依赖抽象层，二者通过“桥”(_imp指针)连接
// 独立扩展：新增抽象类（如RefinedAbstration2）或新增实现类（如ConcreteAbstrationImpC），
//			 都不需要修改原有代码，符合 “开闭原则”。

// 使用场景
// 1. 当一个类存在两个或多个独立变化的维度时(抽象维度、实现维度)
//    如：形状+颜色、
// 2.避免多层继承导致的类膨胀
//   如：支付类型+支付渠道
// 3.希望抽象和实现都能独立扩展（符合开闭原则）
//   如：图形界面框架、日志系统
// 4.实际开发中的高频场景  如：图形界面框架、日志系统、数据库访问层等
int main(int argc, char* argv[])
{
	AbstractionImp* imp = new ConcreteAbstractionImpA();
	Abstraction* abs = new RefinedAbstraction(imp);
	abs->Operation();

	delete abs;
	delete imp;

	return 0;
}