#include <windows.h>
#include <mmsystem.h>
#include <iostream>
using namespace std;
#pragma comment(lib, "winmm.lib")
#include <list>
#include "record.cpp"
#include <random> 

int main() {
    //introduction to the program
    cout << "Welcome to the Module 1" << endl;
    cout << "Press enter to rythmically to record a rythm, press q once your done recording your rythm" << endl;
    Layer layer1;
    Record rec;
    //opens Record class and calls the RecordRythm function to record the rythm and store it in a list of floats
    list<float> rythm1 = rec.RecordRythm();

    //opens sound effect and plays it back according to the rythm recorded by the user
    mciSendStringA("open \"ding.wav\" type waveaudio alias bonk", NULL, 0, NULL);
    for (float r: rythm1){
        std::string playCmd = "play bonk from 1000";
        mciSendStringA(playCmd.c_str(), NULL, 0, NULL);
        Sleep(r);
    }

    return 0;
}
