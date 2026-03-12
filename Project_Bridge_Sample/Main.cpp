#include "VideoPlayer.h"
#include "ElectronicDevice.h"

#include <windows.h> 
#include<iostream>
using namespace std;

int main(int argc,char* argv[]) {
    // 设置控制台编码为 GBK（匹配VS默认编码）
    SetConsoleOutputCP(936);
    SetConsoleCP(936);

    // 场景1：手机播放MP4视频
    VideoPlayerImp* mp4Player = new MP4PlayerImp();
    ElectronicDevice* phone1 = new MobilePhone(mp4Player);
    phone1->playVideo("周杰伦-七里香");

    //平板播放MP4视频
    ElectronicDevice* tablet1 = new Tablet(mp4Player);
    tablet1->playVideo("周深-大鱼海棠");

    // 场景2：平板播放AVI视频
    VideoPlayerImp* aviPlayer = new AVIPlayerImp();
    ElectronicDevice* tablet2 = new Tablet(aviPlayer);
    tablet2->playVideo("漫威-复仇者联盟");

    // 场景3：手机播放AVI视频（维度组合）
    ElectronicDevice* phone2 = new MobilePhone(aviPlayer);
    phone2->playVideo("经典电影-肖申克的救赎");

    // 释放内存
    delete phone1;
    //delete tablet1;
    delete phone2;
    //delete tablet2;
    return 0;
}