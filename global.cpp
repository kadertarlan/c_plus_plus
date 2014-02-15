#include <iostream>
using namespace std;

int y=0;
int x=3;

void f(){
   int x=5; //local x global x ı saklar
   ::x++; // global x ı artırır
   x++; //local x ı artırır
   y++; //global y artırır
   cout << " local x:" << x<< endl;
   cout << "global x:" << ::x << endl ;
}
int main(){
   cout << x << "  " <<y << endl;
   f();
   cout << x << "  "<<  y << endl;
}
