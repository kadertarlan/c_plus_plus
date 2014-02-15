#include <iostream>
using namespace std;

class islem{
  int x,y;
public:
  islem(){ x=0; y=0;}
  islem(int a, int b){ x=a; y=b;}
  int operator==(islem);
  int operator&&(islem);
};
int islem::operator==(islem ob){
   return x==ob.x && y==ob.y;
 }

int islem::operator&&(islem ob){
   return (x&& ob.x) && ( y && ob.y);
}

int main(){
   islem a(5,5);
   islem b(3,4);
   islem c(5,5);

if(a==b){
   cout << " a ile b aynı. " << endl;}
else{
   cout << " a ile b farklı." << endl;}

if(a==c){
    cout << " a ile c aynı." << endl;}
else{
    cout << " a ile c farklı " << endl;}

if(a&&b){
   cout << " a ve b true " << endl;}
else{
   cout << " a ve b false " << endl;}
}
