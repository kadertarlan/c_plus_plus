#include <iostream>
using namespace std;

class base{
  private:
    int k;
  public:
    int i;
    void f();
};

class derived: private base{
  int m;
 public:
  using base::f; // private olan fonk artık görünür yaptık
  void f1();
};

int main(){
   base b;
   derived d;
   
   b.i=5; // ok public in base
 //d.i=0; // error private in derived
   
   b.f(); //ok
   d.f(); // ok using base::f
}
