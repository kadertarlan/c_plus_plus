#include <iostream>
using namespace std;

class base{
  public:
    virtual void func(){
       cout << " usıng base versıon of func(): \n" ;}
};

class derived1 : public base{
   public:
    void func(){
      cout << " usıng derived1 versıon of func()\n";}
};

class derived2 : public derived1{
   public:
    // void func(){
      // cout << " using derived2 versıon of func():\n";}
};

int main(){
  base *p;

  base ob;
  derived1 d_ob1;
  derived2 d_ob2;

  p=&ob;
  p->func();

  p=&d_ob1;
  p->func();

  p=&d_ob2;
  p->func();

}

