#include <iostream>
#include <cstring>
using namespace std;

//sınıf tipi tanımlamak için struct kullanıyor 
struct st{
    st(double b, const char *n);
    void show();
  private:
    double balance;
    char name[40];
};

st::st(double b, const char *n){
      balance=b;
      strcpy(name,n);}

void st::show(){
     cout << "isim: " << name;
     cout << " $" << balance;
     if(balance<0.0) cout << "***";
     cout << "\n";}

int main(){ 
   st acc1(100.12, "johnson");
   st acc2(-12.23, "hedrick");

   acc1.show();
   acc2.show();
   return 0;}
