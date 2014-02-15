#include <iostream>
using namespace std;

void calculate(int &j){
  j=j*j;
}

int main(){
   int i=5;
   calculate(i);
   cout <<i;
}

