#include <iostream>
using namespace std;


int main(){
    int i,j,x=1;
    double d;
    int k=0,dizi[5];

     i=10;
     j=20;
     d=99.101;
     
     cout << "al sana deger:" << i <<  "  " << j << "  " << d << endl;

    while(x){
         cout << "sayi gir: ";

         cin >> x;
         
         cout << "girdigin deger : " << x << endl;
         cout << " cıkıs yapmak için 0 a bas.." << endl;
         dizi[k]=x;
         k++;
}
cout << " dizi elemanları :";
for(i=0;i<k;i++){
      cout << dizi[i] << "   " ;}
    
}
