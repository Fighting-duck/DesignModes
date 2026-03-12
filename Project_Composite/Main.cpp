#include "Component.h" 
#include "Composite.h" 
#include "Leaf.h" 
#include <iostream>
#include<Windows.h>
using namespace std;

// Composite 组合模式
//    叶子节点（Leaf）：无子节点，实现具体操作。
//    组合节点（Composite）：包含子组件列表，可批量执行子组件操作，支持增删子组件。
// 适用场景：适合处理具有“整体 - 部分” 层级结构的场景
// 1.具有层级结构的 “树形” 数据
//   如：文件系统、组织结构、UI组件。。。
// 2.客户端需要统一操作 “单个对象” 和 “对象集合”
//   如：图形绘制、菜单系统。。。
// 3.需动态添加 / 删除 “部分” 的场景
//   如：插件系统、购物车。。。

int main(int argc, char* argv[])
{
    // 设置控制台编码为 GBK（匹配VS默认编码）
    SetConsoleOutputCP(936);
    SetConsoleCP(936);

    // 创建叶子节点
    Leaf* l1 = new Leaf();
    Leaf* l2 = new Leaf();

    // 执行叶子节点操作
    cout << "=== 执行单个叶子节点操作 ===" << endl;
    l1->Operation();

    // 创建组合节点，添加叶子节点
    Composite* root = new Composite();
    root->Add(l1);
    root->Add(l2);

    // 执行组合节点操作（会触发所有子节点操作）
    cout << "\n=== 执行组合节点操作 ===" << endl;
    root->Operation();

    // 获取子节点并执行操作
    cout << "\n=== 获取组合节点的第一个子节点并执行操作 ===" << endl;
    Component* child = root->GetChild(0);
    if (child != nullptr) {
        child->Operation();
    }

    // 删除组合节点（其析构会自动删除所有子节点）
    delete root;
    root = nullptr;

    return 0;
}