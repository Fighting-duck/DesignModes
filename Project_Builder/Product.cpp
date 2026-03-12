#include "Product.h"

#include<iostream>
using namespace std;

Product::Product() {
	ProducePart();
	cout << "return a product" << endl;
}

Product::~Product() {

}

void Product::ProducePart() {
	cout << "build base part of product..." << endl;
}

void Product::AddPart(ProductPart* part) {
	cout << "add a part to product..." << endl;
	// 实际场景中应存储零件（如用vector），这里简化为打印
}

void Product::ShowProduct() {
	cout << "product is complete, all parts are built!" << endl;
}

ProductPart::ProductPart() {
	cout << "build productPart..." << endl;
}

ProductPart::~ProductPart() {

}

ProductPart* ProductPart::BuildPart() {
	return new ProductPart();
}