#include <iostream>
using namespace std;

double kare(double uzunluk, double genislik=0){
   if(!genislik) genislik=uzunluk;
   return uzunluk * genislik;}

//double kare(double uzunluk){
  // return uzunluk* uzunluk;}

int main(){
  cout << "10* 5.8 in alanı:" ;
  cout << kare(10.0,5.8) << endl;
  cout << "10*10 un alanı:" ;
  cout << kare(10) << endl;
}
