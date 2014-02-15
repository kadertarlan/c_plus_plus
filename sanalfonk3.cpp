#include <iostream>
using namespace std;

class base{
   public:
    int i;
    base(int n){ i=n;}
    virtual void func(){
       cout << " using base version of func(): \n";
       cout << i << "\n";}
    };

class derived1 : public base{
   public:
      derived1(int x) : base(x){}
      void func(){
         cout << "using derived1's version of func():" ;
         cout << i*i << "\n";}
};

class derived2 :public base{
   public:
      derived2(int x) : base(x){}
      // derived2 ıcın func yeniden tanımlamıyor.
};

int main(){
   base *p;
   base ob(10);
   derived1 d_ob1(10);
   derived2 d_ob2(10);
  
   p=&ob;
   p->func();

   p=&d_ob1;
   p->func();

   p=&d_ob2;
   p->func();

}

