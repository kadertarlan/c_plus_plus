#include <iostream>
using namespace std;

  
int main(){
// int kayan noktalı sayıya donusturuyor
int i=5;
float f;
f=static_cast<float>(i)/2;
cout << f<< endl;

//sabit işaretcının sabit olmayan işaretcıye(q=p) atamasına izin verilmez.
//burda const_cast ile atama yapmak mumkun
const int *p;
int *q;
q=const_cast<int *>(p);
*q=22;


//reinterpret_cast  bayt bıcımı tekrar yorumlamak ıcın kullanılır
// x in her bir baytına xp işaretcısı kullanılarak erişilebilir 
struct S{
   int i1,i2;
};
int main(){
   S x;
   x.i1=1;
   x.i2=2;
   unsigned char *xp;
   xp=reinterpret_cast<unsigned char *>(&x);
   for(int i=0; i<8; i++){
      cout << static_cast<int>(*xp++)<< endl;
  
}
}






