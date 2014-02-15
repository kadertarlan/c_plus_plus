#include <iostream>
#include <cstring>
using namespace std;

struct st{
     st(double b,char *n);
     void show();
  private:
     double balance;
     char name[40];
};

st::st(double b,char *n){
      balance=b;
      strcpy(name,n); }

void st::show(){
      cout << "isim:" << name << endl;
      cout << ": $" << balance << endl; 
      if(balance<0.0) cout << "****" << endl;}

int main(){
   st yeni(100.2, "sibel");
   yeni.show();
}
