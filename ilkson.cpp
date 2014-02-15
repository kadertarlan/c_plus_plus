#include <iostream>
using namespace std;

int main(){
      int ilk,son,i,toplam=0;

      cout << "iki deger girin:";
      cin >> ilk >> son;

      for(i=ilk+1;i<son;i++){

            toplam=toplam+i;
             }
     
     cout << "iki sayı arasındaki sayıların toplamı:" << toplam;
}