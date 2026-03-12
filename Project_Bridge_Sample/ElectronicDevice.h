#pragma once

#include "VideoPlayer.h"
#include<string>
using namespace std;

// ======抽象层=======

// 电子设备
class ElectronicDevice {
public:
	virtual ~ElectronicDevice() = 0;
	virtual void playVideo(const string& videoName) = 0;// 播放视频
protected:
	ElectronicDevice(VideoPlayerImp* player);
	VideoPlayerImp* _player; // 桥接核心，持有实现层对象引用
private:
};

// 细化抽象1：手机
class MobilePhone :public ElectronicDevice {
public:
	MobilePhone(VideoPlayerImp* player);
	~MobilePhone() override;
	void playVideo(const string& videoName) override;
protected:
};

// 细化抽象2：平板
class Tablet :public ElectronicDevice {
public:
	Tablet(VideoPlayerImp* player);
	~Tablet() override;
	void playVideo(const string& videoName) override;
protected:
	
};