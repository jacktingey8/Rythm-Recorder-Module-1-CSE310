#include <iostream>
using namespace std;
#include <cmath>
#include "testclass.cpp"

int main() {
  cout << "Hello World! \n";
  cout <<"give number: ";
  int x;
  cin >> x;
  cout << "number+1: " << ++x << "\n";
  cout << sqrt(x) << endl;
  int y = 100;
  if (x >= y){

    cout << x << " is greater than " << y << endl;
  }
  else {
    cout << x << " is less than " << y << endl;}
  
  while (x > 0) {
    cout << x << " ";
    x--;
  }
  
  for (int i = 0; i <10; i=i+2){
    cout << i << endl;
  }

  string word;
  cin >> word;

  cout<< "enter word";
  for (char c :word){
    cout << c << endl;
  }

  Test test(3, "blegh");
  test.getinfo();

  return 0;
}