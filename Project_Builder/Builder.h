#pragma once

#include "Product.h"
#include<string>
using namespace std;

// 抽象建造者
class Builder {
public:
	virtual ~Builder();
	virtual void BuildPartA(const string& buildPara) = 0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual Product* GetProduct() = 0;
protected:
	Builder(); // 保护构造，仅子类可调用
private:
};

// 具体建造者
class ConcreteBuilder :public Builder {
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string& buildPara) override;
	void BuildPartB(const string& buildPara) override;
	void BuildPartC(const string& buildPara)override;
	Product* GetProduct() override;
protected:
private:
	Product* _product; // 持有产品对象，作为建造载体
};