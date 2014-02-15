#include <iostream>
using namespace std;

class area{
     int *genislik, *uzunluk;
  public:
     area(int,int);
     ~area();
     int alan(){ return (*genislik * *uzunluk);}
};

area::area(int x,int y){
     genislik=new int;
     uzunluk=new int;
     *genislik=x;
     *uzunluk=y;
}
area::~area(){
     delete genislik;
     delete uzunluk;}

int main(){
    area sonuc(7,9);
    cout << " uzunlukları 7 ve 9 arsanın alanı:" << sonuc.alan() << endl;
}
