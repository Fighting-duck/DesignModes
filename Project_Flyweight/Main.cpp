#include "Flyweight.h" 
#include "FlyweightFactory.h" 
#include <iostream>
using namespace std;

// Flyweight 享元模式
// 核心是复用已创建的对象（享元） 来减少内存占用、提升性能，尤其适用于大量相似对象的场景。
// 享元（Flyweight）：可复用的对象，分为两类状态：
//     内部状态（Intrinsic State）：对象固有的、可共享的状态（如代码中的_intrinsicState），存储在享元对象内部；
//     外部状态（Extrinsic State）：对象依赖的、不可共享的状态（如Operation的extrinsicState参数），由使用者传入。
// 享元工厂（FlyweightFactory）：管理享元对象池，负责创建 / 复用享元对象，避免重复创建。
// 核心目标：通过共享相同内部状态的对象，减少内存中对象的数量（如代码中 "hello" 被创建一次，第二次直接复用）。
// 
// 工厂类是享元模式的核心：通过对象池复用已有对象，减少重复实例化，降低内存消耗；

int main(int argc, char* argv[]){
	// 创建享元工厂
	FlyweightFactory* fc = new FlyweightFactory();
	Flyweight* fw1 = fc->GetFlyweight("hello"); // 第一次获取"hello"：创建新对象
	fw1->Operation("场景1"); // 测试外部状态

	Flyweight* fw2 = fc->GetFlyweight("world!");   // 第一次获取"world!"：创建新对象
	fw2->Operation("场景2"); // 测试外部状态
	Flyweight* fw3 = fc->GetFlyweight("hello"); // 第二次获取"hello"：复用已有对象
	fw3->Operation("场景3"); // 测试外部状态

	// 释放工厂（工厂析构会自动释放所有享元对象）
	delete fc;
	fc = nullptr;
	return 0;
}