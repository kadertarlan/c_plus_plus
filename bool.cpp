#include <iostream>
using namespace std;

int main(){
  
   bool a;
   a=false;

   int sayi=43, tahmin;
   
   while(!a){

     cout << " sayıyı tahmın et:\n";
     cin >> tahmin;

     if(tahmin>sayi){ cout << "buyuk sayi girdin..:\n";}
     else if(tahmin<sayi){ cout << "kucuk sayi girdin..:\n";}
     else a=true;
     }
if(a==true){ cout << "tebrikler sayiyi buldunuz..\n";}

}
