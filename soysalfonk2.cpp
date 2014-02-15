#include <iostream>
using namespace std;

template <class X>
int absi(X &a){
    if(a<0){
 
       return -a;}
    else return a;
}

int main(){
 
   int a;
   a=absi(-10.10);
   cout << " modu alınmış sayılar:\n";
   cout <<  a << endl;
   cout <<  absi(-10L) << endl;
   cout <<  absi(-10.10) << endl;
   //cout <<  absi(10) << endl;
   //cout <<  absi(-10000000000000) << endl;

}

