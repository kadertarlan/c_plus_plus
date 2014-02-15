#include <iostream>
using namespace std;

class kamyon; // forward bildirim

class araba{
    int hiz;
  public:
    araba(int i){
        hiz=i;}
    friend int limit(araba a,kamyon k);
};

class kamyon{
    int hiz;
  public:
    kamyon(int h){
       hiz=h;}
   friend int limit(araba a,kamyon k);
};

int limit(araba a,kamyon k){
     return a.hiz - k.hiz;}

int main(){

    int sonuc;
    araba a(80);
    kamyon k(70);
    sonuc=limit(a,k);
    if(sonuc<0){ cout << "kamyon yavasla.. :)" << endl;}
    else if(sonuc==0){
        cout << " araba ile kamyon aynı hızda.." ;}
    else
        cout << " araba yavasla.. :)" ;
}
