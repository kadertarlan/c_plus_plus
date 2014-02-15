
#include <iostream>
using namespace std;

 class base{
   int x;
   public:
    void setx(int i){  x=i;}
    int getx(){ return x;}
};

class derived : public base{
    int y;
    public:
     void sety(int i){ y=i;}
     int gety(){ return y;}
};

int main(){
    base *p;
    base b_ob;
    derived d_ob;
    
    p=&b_ob; // taban nesneye ulasmak için p yi kullan
    p->setx(10);
    
    cout << "base object x: " << p->getx() << "\n";

    // turetılmıs nesneyee ulasmak için p yi kullan

    p=&d_ob;
    p->setx(99);

    d_ob.sety(88); // y yi ayarlamak için p kullanılmaz dırek eriş

    cout << "derived obje x:" << p->getx() << endl;
    cout <<  "derıved obje y:" << d_ob.gety() << endl;
}
