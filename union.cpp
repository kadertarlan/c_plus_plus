#include <iostream>
using namespace std;
    
      union bits{
           bits(double n);
           void show_bits();
           double d;
           unsigned char c[sizeof(double)]; };

bits::bits(double n){
      d=n; }

void bits::show_bits(){
      int i,j;
      for(j=sizeof(double)-1; j>0; j--){
            cout << "bayt cinsinden bit düzeni" << j << ": ";
            for(i=128; i; i>>=1)
                 if(i & c[j] ) cout << "1";
                 else cout << "0";
           cout << "\n";

}}

int main(){
     bits ob(1991.896);
     ob.show_bits();
     return 0; }

