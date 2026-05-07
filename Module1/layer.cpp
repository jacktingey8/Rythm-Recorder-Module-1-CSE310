#ifndef LAYER_H
#define LAYER_H


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