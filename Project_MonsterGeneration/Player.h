#pragma once

#include<iostream>
using namespace std;

class PlayerSigleton {
public:
	static PlayerSigleton* Instance();
	~PlayerSigleton();
protected:
	PlayerSigleton();
private:
	static PlayerSigleton* _instance;
};
