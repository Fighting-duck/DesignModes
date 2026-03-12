#pragma once

class Product {
public:
	virtual ~Product() = 0;  // 纯虚析构函数
protected:
	Product();  // 屏蔽构造函数
private:

};

class ConcreteProduct :public Product {
public:
	~ConcreteProduct() override;
	ConcreteProduct();
protected:
private:
};
