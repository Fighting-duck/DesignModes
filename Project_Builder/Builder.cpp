#include "Builder.h"

#include<iostream>
using namespace std;

Builder::Builder() {

}

Builder::~Builder() {

}

ConcreteBuilder::ConcreteBuilder() {
	_product = new Product(); // 初始化产品
}

ConcreteBuilder::~ConcreteBuilder() {
	delete _product; // 释放产品内存
}

void ConcreteBuilder::BuildPartA(const string& builderPara) {
	cout << "Step1:Build PartA..." << builderPara << endl;
	_product->AddPart(new ProductPart()); // 构建零件并添加到产品
}

void ConcreteBuilder::BuildPartB(const string& builderPara) {
	cout << "Step2:Build PartB..." << builderPara << endl;
	_product->AddPart(new ProductPart());
}

void ConcreteBuilder::BuildPartC(const string& builderPara) {
	cout << "Step3:Build PartC..." << builderPara << endl;
	_product->AddPart(new ProductPart());
}

Product* ConcreteBuilder::GetProduct() {
	BuildPartA("pre-defined");
	BuildPartB("pre-defined");
	BuildPartC("pre-defined");
	return _product;
}


