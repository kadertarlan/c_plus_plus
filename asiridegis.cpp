#include<iostream>
using namespace std;

int y=0;
int x=1;

void f(){
  int x=5;
  ::x++;
  x++;
  cout << " x= " << x << endl;
  y++;
  cout  << "y : " << y << endl;
}
int main(){
  cout << "  x = " << x << endl;
  f();
  cout << " x = " << x << endl;

}
