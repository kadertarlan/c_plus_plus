#include <iostream>
using namespace std;

class deneme{
   int x;
 public:
  void ata(int i){
    x=i;}
  void show(){
     cout << x << endl;}
};
class turet:private deneme{
   int y;
  public:
   void ata1(int j){
     y=j;}
  void show1(){
    cout <<  x+y <<  endl;}
};

int main(){
   turet ob;
   deneme ob1;
   ob.ata1(5);
//   ob.ata(2);
   ob1.ata(3);
  // ob.show();
   ob.show1();
}
