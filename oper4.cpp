#include <iostream>
using namespace std;

class islem{
   int x,y;
 public:
   islem(){ x=0; y=0;}
   islem(int a,int b){ x=a; y=b;}

   int operator++();
   void goster(int &k,&l){
      k=x;
      l=y;}
};

int islem::operator++(){
   x++;
   y++;
   return *this;
}
int main(){

   islem a(1,3);
   int k1,k2;
   ++a;
   a.goster(k1,k2);
    cout << " x: << k1 << endl;
    cout << " y : << k1 << endl;
}
