#include <iostream>
using namespace std;


class kamyon;

class araba{
    int hiz;
  public:
     araba(int h){
        hiz=h;}
     int limit(kamyon nesne);
};


class kamyon{
    int hiz;
  public:
   kamyon(int h){
       hiz=h;}
   friend int araba::limit(kamyon nesne);
};

int araba::limit(kamyon nesne){
     return hiz-nesne.hiz;}

int main(){
    araba a(80);
    kamyon k(70);
    if((a.limit(k))<0){ cout << "  kamyon yavasla :) " << endl;}
    else  if((a.limit(k))==0){ cout <<  " kamyon ve araba esit hizli.." << endl;}
    else 
          cout << " araba yavasla.. :)" << endl;
}
