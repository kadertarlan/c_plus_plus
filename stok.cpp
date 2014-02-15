#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;

class stok{
protected:
  string urunadi;
  int urunsayisi;
public:
  stok(string yeniurunadi, int yeniurunsayisi=15) : urunadi(yeniurunadi) , urunsayisi(yeniurunsayisi){
    cout << urunsayisi << " adet " << urunadi << " olusturuluyor" << endl;}
  ~stok(){ 
     cout << urunsayisi << " adet " << urunadi << " yok ediliyor.." << endl;}
};
class yiyecekstok : public stok{
  int skt_ay;
  int skt_gun;
  int skt_yil;
 public:
   yiyecekstok(string urunadi, int urunsayisi=15, int skt_ay=0, int skt_gun=0, int skt_yil=0);
   void varmi();
};


 yiyecekstok::yiyecekstok(string urunadi, int urunsayisi, int skt_ay, int skt_gun, int skt_yil): stok(urunadi, urunsayisi){
     if(skt_gun > 0 && skt_gun < 32){ this->skt_gun=skt_gun;}
     if(skt_ay > 0 && skt_ay < 13){  this->skt_ay=skt_ay;}
     if(skt_yil > 1900 && skt_yil  <=2100){ this->skt_yil=skt_yil;}
} 
 void yiyecekstok::varmi(){
    bool var=true;
    if(urunsayisi<=0){
        var=false;}
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    cout << now->tm_year + 1900<< endl;
    cout << now->tm_mon +1 << endl;
    cout << now->tm_mday << endl;

    if (skt_yil < (now->tm_year + 1900)) { var=false;}
    else if (skt_yil== (now->tm_year + 1900) ){  
       if( skt_ay < (now->tm_mon +1)){  
           var=false;}
        else if( skt_ay == (now->tm_mon + 1)) {
             if( skt_gun <(now->tm_mday) ) {
                  var=false;}}}
    if(var){ cout << urunadi << " adli urun stokta vardır.." << endl ;}
    else cout << "malesef " << urunadi << " urun stogumuzda mevcut değil.." << endl;
}

int main(){
    yiyecekstok ekmek("ekmek",40, 3, 12, 2014 );
    ekmek.varmi();
}

