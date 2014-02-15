#include <iostream>
using namespace std;

template <class T>
T max_min_ort( T s1, T s2, T s3){
 T en_buyuk=s1;
 T en_kucuk=s2;

  if(s2>en_buyuk)  en_buyuk=s2;
  if(s3>en_buyuk)  en_buyuk=s3;

  if(s1<en_kucuk)  en_kucuk=s1;
  if(s3<en_kucuk)  en_kucuk=s3;

   T ortalama= (en_kucuk + en_buyuk) / 2;
   return ortalama;

}

int main(){
   cout << max_min_ort(15,28,31) << endl;
} 
