#include <iostream>
using namespace std;


template <class type>
class stack{
  enum{ MAX=100}
  type st[MAX]; 
  int top;
 public:
  stack();
  void push(type);
  type pop();
};
template <class type>
void stack <type<::push(type var){
  if(top>MAX-1)throw "stack is full";
  st[top+1]=var;
  }
template <class type>
type stack<type>::pop(){
  if(top<=0) throw " stack is empty..";
  return st[--top];
}

int main(){
  stack<float> s1;
  try{
    s1.push(111.233);
    s1.push(121.322);
    cout << "1:" << s1.pop() << endl;
    cout << "2:" << s1.pop() << endl;
}
 catch(const char* msg){
   cout << msg << endl;
}

