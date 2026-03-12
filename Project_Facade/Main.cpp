#include "Facade.h" 
#include <iostream> 
using namespace std;

// Facede 外观模式：为复杂的子系统提供一个统一的 “门面” 接口，简化客户端与子系统的交互，降低系统耦合度
// 


int main(int argc, char* argv[]){
	// 客户端只需创建外观类对象，无需关注子系统的细节
	Facade* f = new Facade();
	// 调用统一的门面接口，完成复杂的子系统组合操作
	f->OperationWrapper();

	delete f;
	return 0;
}