#include <iostream>
#include <string>
using namespace std;
#include <chrono>
#include <list>
#include "layer.cpp"

class Record : public Layer {
private:
    list<float> _rythm;
public:
     list<float> RecordRythm() override {
        
    cout << "Press Enter to start recording"<< endl;
    cin.get();
    bool rec = true;
    char done;
    while (rec=true){

        auto start = chrono::high_resolution_clock::now();


        cin.get(done);
        if (done == 'q') {
            return _rythm;
        }



        auto end = chrono::high_resolution_clock::now();


        auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);


        _rythm.push_back(duration.count());

    }

    
    }





};