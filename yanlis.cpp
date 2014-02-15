#include <iostream>
using namespace std;

class myclass{
     int a;
  public:
     myclass(); //constructor
     void show();
};

void myclass::show(){
       cout << a;
}
myclass::myclass(){
     cout << "constructor da\n";
     a=10;}
     

  



int main(){ 
     myclass ob;
     ob.show();
     return 0;}