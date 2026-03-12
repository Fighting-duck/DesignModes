#include "VideoPlayer.h"

#include<iostream>
using namespace std;

VideoPlayerImp::VideoPlayerImp() {

}
VideoPlayerImp::~VideoPlayerImp() {

}

MP4PlayerImp::MP4PlayerImp() {

}
MP4PlayerImp::~MP4PlayerImp() {

}
void MP4PlayerImp::play(const string& videoName) {
	cout << "[MP4解码器] 解码并播放: " << videoName << ".mp4" << endl;
}

AVIPlayerImp::AVIPlayerImp() {

}
AVIPlayerImp::~AVIPlayerImp() {

}
void AVIPlayerImp::play(const string& videoName) {
	cout << "[AVI解码器] 解码并播放: " << videoName << ".avi" << endl;
}