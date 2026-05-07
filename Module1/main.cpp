#include <windows.h>
#include <mmsystem.h>
#include <iostream>
using namespace std;
#pragma comment(lib, "winmm.lib")
#include <list>
#include "record.cpp"
#include <random> 

int main() {


    Layer layer1;
    Record rec;
    list<float> rythm1 = rec.RecordRythm();

    mciSendStringA("open \"ding.wav\" type waveaudio alias bonk", NULL, 0, NULL);
    for (float r: rythm1){
        std::string playCmd = "play bonk from 1000";
        mciSendStringA(playCmd.c_str(), NULL, 0, NULL);
        Sleep(r);
    }

    return 0;
}