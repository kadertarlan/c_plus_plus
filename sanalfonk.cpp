#include <iostream>
#include <cstdlib>
using namespace std;

class base{
   public:
    int i;
    base(int x){ i=x;}
    virtual void func(){
        cout << "using base version func():" << endl;
        cout << i << endl;}
};
class derived1 : public base{
   public:
     derived1(int x) : base(x){}
     void func(){
       cout << " using derived1 version func():" << endl;
       cout << i*i << endl;}
};

class derived2 : public base{
  public:
    derived2(int x) : base(x){}
    void func(){
      cout << "using derived2 version func:" << endl;
      cout << i+i << endl;}

};

int main(){
    base *p;
   
    derived1 d_ob1(10);
    derived2 d_ob2(10);
  
    int i,j;
    for(i=0;  i<10; i++){
        j=rand();
        if((j%2)){ p= &d_ob1;} // tekse d_ob1 i kullan
        else p=&d_ob2;   // cıftse d_ob2 yi kullan
        p->func(); // dogru fonk cagır

}
}
