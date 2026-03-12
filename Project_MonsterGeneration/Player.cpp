#include "Player.h"

#include<iostream>
using namespace std;

PlayerSigleton* PlayerSigleton::_instance = 0;

PlayerSigleton::PlayerSigleton() {
	cout << "玩家创建成功..." << endl;
}

PlayerSigleton* PlayerSigleton::Instance() {
	if (_instance == 0) {
		_instance = new PlayerSigleton();
	}
	return _instance;
}