#include <iostream>
using namespace std;

class myclass{
    int a;
  public:
   myclass(int x);
   int get();
};

myclass::myclass(int x)[
     a=x;}

int myclass::get(){
     return a; }

int main(){
      myclass ob(120);
      myclass *p; //nesne için işsaretci olusturuluyor.
      p=&ob;
   
      cout << "nesneyi kullanan deger:" << ob.get() << endl;
      cout << "isaretciyi kullanan deger:" << p->get();
}
