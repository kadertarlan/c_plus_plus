#include <iostream>
using namespace std;

class deneme{
  float x;
  public:
   deneme(int n){ x=n;}
   deneme(int n, float m){
     x=n+m;}
   deneme(int n,float m, long l){
     x=n+m+l;}
   int goster(){
      return x;}
};
int main(){
   deneme ob1(20);
   deneme ob2(20,10.10);
   deneme ob3(10,10.10,10000);

  cout <<  ob1.goster() << endl;
  cout << ob2.goster() << endl;
  cout <<  ob3.goster() << endl;
}
