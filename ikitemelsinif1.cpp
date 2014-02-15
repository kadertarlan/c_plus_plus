#include <iostream>
using namespace std;

class B1{
   public:
     B1(){ cout << " B1 olusturuluyor..\n";}
     ~B1(){ cout << "B1 yok ediliyor..\n";}
};

class B2{
    public:
      B2(){ cout << "B2 olusturuluyor..\n";}
      ~B2(){ cout << "B2 yok ediliyor..\n";}
  };

class D : public B1, public B2{
    public:
      D(){ cout << " D olusturuluyor..\n";}
      ~D(){ cout << " D yok ediliyor..\n";}

};

int main(){

   D ob;
}
