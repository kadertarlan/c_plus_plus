#include <iostream>
using namespace std;

class base{
  protected:
   int a,b;
  public:
   void setab(int n,int m){  a=n; b=m;}
};

class derived : private base{
    int c;
  public:
    void setabc(int k, int l,int n){ setab(k,l);   c=n;}
    void showabc(){
       cout << a << ' ' << b << ' ' << c << endl;}
};
int main(){
   derived ob;

   ob.setabc(1,2,3);

   ob.showabc();
}

