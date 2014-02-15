#include <iostream>
using namespace std;

class base{
   public:
    int i;
    base(int n){  i=n;}
    virtual void func(){
       cout << " using base version of func(): ";
       cout << i << endl;}
};

class derived1 : public base{
  public:
    derived1(int x) : base(x){}
    void func(){
        cout << "using derived1 version of func(): ";
        cout << i*i << endl;}
};

class derived2 : public base{
  public:
    derived2(int x) : base(x){}
    void func(){
        cout << " using derived2 version of func(): ";
        cout << i+i << endl;}
};

int main(){
    base *p;
    base ob(10);
    derived1 d_ob1(10);
    derived2 d_ob2(10);

    p=&ob;
    p->func();   // base in func() kullanımı
    
    p=&d_ob1;
    p->func();  // derived1 func() kullanımı

    p=&d_ob2;
    p->func();  // derived2 func() kullanımı

}

