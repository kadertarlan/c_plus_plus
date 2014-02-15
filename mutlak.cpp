#include <iostream>
using namespace std;

int mutlakdeger(int x){
   if(x<0){ return x*(-1);}
   else  return x;
}

float mutlakdeger(float y){
   if(y<0){ return y*(-1.0);}
   else return y;
}
int main(){
  int tamsayi;
  float gercel;
  int x=-100;
  float y=-98.2;
  tamsayi=mutlakdeger(x);
  gercel=mutlakdeger(y);
  cout << x << " ıcın mutlak deger : " << tamsayi;
  cout << y << " icin mutlak deger : " << gercel;
} 
 
