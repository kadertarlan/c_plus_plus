#include <iostream>
using namespace std;
//temel sınıf publıc elemanlarını alt sınıfında publıc elemanları olur mırasla

class B{
   int i;
 public:
   void set_i(int n);
   int get_i();
};

class D: public B{ // B temel sınıfından mıras alacagım demek.
     int j;
  public:
     void set_j(int n);
     int mu1();
};
void B::set_i(int n){
    i=n;}

int  B::get_i(){
    return i;}

void D::set_j(int n){
    j=n;}

int D::mu1(){ 
    return j * get_i();}

int main(){
     D ob;
     ob.set_i(10); //temel sınıfta i ye deger verılıyor
     ob.set_j(4); // alt sınıftakı j ye deger verılıyor

     cout <<  ob.mu1();
}
