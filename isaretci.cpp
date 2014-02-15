#include <iostream>
using namespace std;

class myclass{
     int a;
  public:
     myclass(int x);
     int get();
};

myclass::myclass(int x){
    a=x;
}
 
int myclass::get(){
     return a;}

int main(){
     myclass ob(120); //nesne olusturuluyor
     myclass *p;      //nesne için işaretçi oluşturuluyor

    p=&ob; 

cout << "nesneyi kullanan değer:" << ob.get() << "\n";

cout << "isaretciyi kuallanan deger: " << p->get();
return 0;}
