#include <iostream>
using namespace std;

class A{
  int intA;
  float floA;
  public:
   A(int i, float f) : intA(i), floA(f){
     cout << " constructor A.." << endl; }
   void display(){
      cout << intA << "  "<<  floA << endl;}
   ~A(){ 
      cout << " destructor A.." << endl;}
};

class B : public A{
  int intB;
  float floB;
 public:
  B(int i1,float f1, int i2, float f2): A(i1,f1), intB(i2), floB(f2){
     cout << " contructor B.." << endl;}
  void display(){
    A::display();
    cout << intB << "  " << floB << endl;}
  ~B(){
     cout << " destructor B.." << endl;}
};

class C :public B{
   int intC;
   float floC;
 public: 
   C(int i1,float f1,int i2,float f2,int i3,float f3): B(i1,f1,i2,f2), intC(i3), floC(f3){
     cout << " constructor C.." << endl;}
   void display(){
     B::display();
     cout << intC << "  " << floC << endl;}
   ~C(){
     cout << " destructor C.." << endl;}
};
int main(){
   C c(1,1.1, 2,2.2 ,3,3.3);
   cout << endl;
   c.display();

}

