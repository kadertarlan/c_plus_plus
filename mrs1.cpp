#include <iostream>
using namespace std;

class base{
   int x;
  public:
   void setx(int n) { x=n;}
   void showx(){ cout << x << "\n";}
};
class derived : private base{
    int y;
   public:
    void setxy(int n,m){ setx(n);  y=m;}
    void showxy(){  showx();   cout << y << endl;}
};

int main(){
   derived ob;

//   ob.setx(10);
//   ob.sety(20);
     ob.setxy(10,20);
  // ob.showx();
  // ob.showy();
     ob.showxy();
}

