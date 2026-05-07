
#include <iostream>
using namespace std;

class Test {
    private:
    int MyNumber;
    string MyString;

    public:
    Test(int num, string str){
        MyNumber = num;
        MyString = str;
    }
    void getinfo(){
        cout << "Number: " << MyNumber << endl;
        cout << "String: " << MyString << endl;
    }

    


};