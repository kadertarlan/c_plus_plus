#include <iostream>
using namespace std;

class myclass{
   int a;
  public:
   myclass();
   ~myclass();
   void show();

};

myclass::myclass(){
    cout << "constructorda.." << endl;
    a=10;
}
myclass::~myclass(){
     cout << "yok ediliyyor.." << endl;
}
void myclass::show(){
     cout << a << endl;}

int main(){
      myclass ob;
      ob.show();
}

