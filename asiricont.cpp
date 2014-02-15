#include <iostream>
 using namespace std;

class asiri{
   int x;
  public:
    asiri(){ x=0;}
    asiri(int i){ x=i;}
    int getx(){ return x;}
};
int main(){
    asiri ob;
    asiri ob1(7);

    cout << "ob: " <<ob.getx() << endl;
    cout << "ob1:" << ob1.getx() << endl;
}
