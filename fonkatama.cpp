#include <iostream>
using namespace std;

class samp{
     int i;
  public:
     samp(int n){   i=n;}
     int get(){   return i;}
};

int sqrt(samp o){
     return o.get() * o.get();
}
int main(){
      samp a(5),b(4);
      cout << a.get() << endl;
      cout << sqrt(a) << endl;
      cout << sqrt(b) << endl;
}
