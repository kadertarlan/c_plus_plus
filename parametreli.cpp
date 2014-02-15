#include <iostream>
using namespace std;

class myclass{
     int a;
   public:
     myclass(int x);
     void show();
};

myclass::myclass(int x){
    a=x;
}

void myclass::show(){
     cout << a ;
}

int main(){
    myclass ob(10);
    ob.show();
}
