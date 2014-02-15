#include <iostream>
using namespace std;

int main(){
      int alt,ust,toplam=0;

     cout << "alt limit gir:";
     cin >> alt;
    
     cout << "üst limit gir:";
     cin >> ust;
 
    alt++;
    do {
       toplam=alt+toplam;
       alt++;
       }while(alt!=ust);


     cout << "iki aralıkta sayılarımızın toplamı:" << toplam;
}

