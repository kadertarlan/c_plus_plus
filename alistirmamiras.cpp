#include <iostream>
using namespace std;

class A{
  public:
   int ia1, ia2;
   void fa1();
   int fa2(int);
};

class B: public A{
  public:
//turetilmiş sınıfta temel sınıftan aynı adda bır fonk farklı tanımlanırsa aşırı yukleme degıl overrıde olur 
//yani fonk üzerine yazma olur. temel sınıftakı fonk saklanmıs olur
   float ia1;  // override ia1
   float fa1(float); //override fa1
};

int main(){
  B b;
  int j=b.fa2(1); // A::fa2
  b.ia1=4.5; // B::ia1
  float y= b.fa1(3.14); // B::fa1;
  
  b.ia2=3;  // A::ia2 if ia2 is public in A
  
  // b.fa1(); bu satır hata verır cunku fa1 B sınıfı için saklanmıstı ve float degerı almadan yazılan boyle bır fonk sahıp degıl B
// peki biz temel sınıftakı fa1() fonk nasıl kullanırız asagıda gosterılıyor

 b.A::fa1();
 b.A::ia1=15;
 
 cout << b.ia1 << "  " << b.ia2 << "  " << b.A::ia1;
}
