#include "Builder.h"
#include "Product.h"
#include "Director.h"

#include<iostream>
using namespace std;

int main(int argc,char* argv[]) {
	// 创建指挥者，传入具体建造者
	Director* d = new Director(new ConcreteBuilder());
	// 执行建造流程
	d->Construct();

	// 释放指挥者内存
	delete d;

	return 0;
}