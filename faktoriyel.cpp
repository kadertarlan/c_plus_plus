#include <iostream>
using namespace std;
  

int main(){

    int i,sayi;
    int sonuc=1;
    cout << " faktoriyel alacagın sayıyı yaz:";
    cin >> sayi;
   
    for(i=sayi;i>0;i--){
         sonuc=sonuc*i;}

    cout << "faktoriyel sonucu:" << sonuc;

}