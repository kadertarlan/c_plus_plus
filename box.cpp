#include <iostream>
using namespace std;


class box{
    double x,y,z;
  public:
    box(double a,double b,double c);
    void show();
    int hacim();
};

box::box(double a,double b,double c){
    x=a;
    y=b;
    z=c;
}
int box::hacim(){
   return x*y*z;
}
void box::show(){
     cout << " kenar uzunlukları " << x << ',' << y << ',' << z << " olan kutunun hacmi : "; 
}

int main(){
    box ob(2,3,6);
    ob.show();
    cout << ob.hacim();
    cout << endl;
    return 0;
}

