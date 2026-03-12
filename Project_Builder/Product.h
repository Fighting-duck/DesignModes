#pragma once

// 产品零件类
class ProductPart {
public:
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();
protected:
private:
};

// 最终产品类
class Product {
public:
	Product();
	~Product();
	void AddPart(ProductPart* part);// 添加零件的方法
	void ShowProduct(); // 展示产品
protected:
private:
	void ProducePart(); // 内部构建基础零件
};