#include <iostream>
using namespace std;

template <class T>
T abs(T n){
   return (n<0)? -n:n;
}
int main(){
  int int1=5;
  int int2=-6;
  long long1=-4000000;
  double dub=-9.98;

cout << "abs(int):" << abs(int1) << endl;
cout << "abs(int2):" << abs(int2) << endl;
cout <<"abs(long):" << abs(long1) << endl;
cout << " abs(dub):" << abs(dub) << endl;
}
