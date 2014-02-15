#include <iostream>
using namespace std;
#define SIZE 10

class stack{
      char stck[SIZE];
      int tos;
   public:
      void init();
      void push(char ch);
      char pop();};

void stack::init(){
     tos=0;}

void stack::push(char ch){
     if(tos==SIZE){
         cout << "yıgın doldu"; 
         return;}
     stck[tos]=ch;
     tos++;}
char stack::pop(){
     if(tos==0){
         cout << "\nyıgın bosaldı..\n";
         return 0;}
     tos--;
     return stck[tos];
}
int main(){
  int i;
  char x;
  stack s1;
  s1.init();
  for(i=0;i<SIZE-1;i++){
       cout << " stack icin " << i+1 <<" . elemani gir:" ;
       cin >> x;
       s1.push(x);}
  cout << " stackinizde bulunan elemanlar.. " << endl;
  for(i=0;i<SIZE;i++){
      cout << "-" << s1.pop() << "-";}
     }
