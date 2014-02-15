#include <iostream>
using namespace std;

int main(){

   int *p;
   p=new int;
   delete p;

  int *k;
  k=new int(5);
  cout << *k << endl;
  delete k;

  int *dizi;
  dizi=new int[10];
  delete [] dizi;

int i=9;
int &j=i; // i ve j aynı adresteler. depolama için alternatıf ısım saglanmıs oldu
j++; // i ve j gibi iki isim için sadece bır tamsayı hucresi vardr.
cout << i << "  " << j << endl;
}

  
