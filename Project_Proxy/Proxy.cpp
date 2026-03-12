#include "Proxy.h" 
#include <iostream>
using namespace std;
Subject::Subject(){
}
Subject::~Subject(){
}

ConcreteSubject::ConcreteSubject(){
}
ConcreteSubject::~ConcreteSubject(){
}
void ConcreteSubject::Request(){
	cout << "ConcreteSubject......request...."<<endl; 
}

Proxy::Proxy(){
}
// 代理类构造：接收真实对象指针
Proxy::Proxy(Subject* sub){
	_sub = sub;
}
Proxy::~Proxy(){
	 _sub = nullptr;
}
// 代理类的请求处理：可以在调用真实对象前/后添加额外逻辑（如权限校验、日志等）
void Proxy::Request()
{
    if (_sub == nullptr) { // 空指针检查，提升健壮性
        cout << "Proxy：错误！真实对象为空，无法执行请求" << endl;
        return;
    }

    // 代理的前置处理（扩展逻辑）
    cout << "Proxy：执行前置校验（如权限检查、日志记录）..." << endl;

    // 调用真实对象的核心逻辑
    _sub->Request();

    // 代理的后置处理（扩展逻辑）
    cout << "Proxy：执行后置处理（如结果缓存、清理资源）..." << endl;
}