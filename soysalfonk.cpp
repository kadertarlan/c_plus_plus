#include <iostream>
using namespace std;
// bu fonk sablonu

//template <typename X> void swapargs(X &a, X &b) şeklinde olanilir tanımlama
//template <class X> void swapargs(X &a , X &b){  seklındede olabılır
template <class X>
void swapargs(X &a,X &b)  //template bildirimi fonk dan hemen önce gelmelı araya baska bısey yazılmaz
{
    X temp;
    temp=a;
    a=b;
    b=temp; }

int main(){
   int i=10, j=20;
   float x=10.1, y=23.3;

   cout << " orijinal i,j: " << i << "  " <<j << endl;
   cout << " orijinal x,y: " << x << "  " << y << endl;

    swapargs(i,j); // tamsayıları yer degıstır
    swapargs(x,y);  //  floatları  yerdegıstr
    cout << "swapped i,j:" << i << " " << j << endl;
    cout << "swapped x,y:" << x << " " << y << endl;
}
// main de swapargs ıkı farkılı sekılde cagrılmıstır biri tamsayı biri float için.
//derleyıcı swapargs() fonk iki farklı surumunu kendılıgınden olusturur.
//soysal fonk: template ile tanımlanan fonk dur.template fonk da denir
//derleyıcı bu fonk özel sürümünü olusturdugunda üretilmiş fonk(generated func) denir.
//üretilmiş fonk sablon fonk özel bir sürümüdür.



