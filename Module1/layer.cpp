#ifndef LAYER_H
#define LAYER_H
#include <list>
using namespace std;

class Layer { 
public:

    Layer() = default;

    virtual list<float> RecordRythm() {
        return {};
    }

    virtual int getTone() {
        return 0;
    }



};

#endif