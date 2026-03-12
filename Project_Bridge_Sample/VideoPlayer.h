#pragma once

#include<string>
using namespace std;

// =======实现层=======

// 视频播放器
class VideoPlayerImp {
public:
	virtual ~VideoPlayerImp();
	virtual void play(const string& videoName) = 0;  // 播放指定格式视频
protected:
	VideoPlayerImp();
private:
};

// 具体实现1：MP4播放器
class MP4PlayerImp :public VideoPlayerImp {
public:
	MP4PlayerImp();
	~MP4PlayerImp();
	void play(const string& videoName) override;
protected:
private:

};

// 具体实现2：AVI播放器
class AVIPlayerImp :public VideoPlayerImp {
public:
	AVIPlayerImp();
	~AVIPlayerImp();
	void play(const string& videoName) override;
protected:
private:

};