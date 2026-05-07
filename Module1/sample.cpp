#include <iostream>
#include <string>
using namespace std;
#include <chrono>
#include <list>
#include "layer.cpp"

class Sample : public Layer {

public :

    int _tone;

    Sample (int tone) {
        _tone = tone*1500;
    }
    
    int getTone() override {
        return _tone;
    }



};