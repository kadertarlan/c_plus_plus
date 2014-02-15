#include <iostream>
using namespace std;
class base{
   protected:
    int a,b;
  void setab(){ a=1; b=2;}
};
class derived : protected base{
   int c;
  public:
   void setc(int n){ c=n;}
   void showabc(){  cout << a << " " << b <<  "  " << c << endl;}
};
int main(){
   derived ob;
   ob.setc(3);
   ob.showabc();
}
