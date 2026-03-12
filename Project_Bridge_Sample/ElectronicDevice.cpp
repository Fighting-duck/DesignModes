#include "ElectronicDevice.h"
#include "VideoPlayer.h"

#include<iostream>
using namespace std;

ElectronicDevice::ElectronicDevice(VideoPlayerImp* player):_player(player) {}

// 纯虚析构函数必须提供实现
ElectronicDevice::~ElectronicDevice() = default;

MobilePhone::MobilePhone(VideoPlayerImp* player):ElectronicDevice(player) {}
MobilePhone::~MobilePhone() {
	delete _player;
	_player = nullptr;
}
void MobilePhone::playVideo(const string& videoName){
	cout << "[手机] 准备播放视频 >> ";
	if (_player) {
		// 播放视频
		_player->play(videoName);
	}
}

Tablet::Tablet(VideoPlayerImp* player) :ElectronicDevice(player) {}
Tablet::~Tablet() {
	delete _player;
	_player = nullptr;
}
void Tablet::playVideo(const string& videoName) {
	cout << "[平板] 准备播放视频 >> ";
	if (_player) {
		// 播放视频
		_player->play(videoName);
	}
}