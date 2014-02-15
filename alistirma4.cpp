#include <iostream>
using namespace std;


int& max(int a[],int lenght){
   int i=0;
   for(int j=0; j<lenght; j++){
     if(a[j] >a[i]) i=j;}
   return a[i];

}

int main(){
  int array[]={1,-7,45,76,9};
  cout << max(array,5);

}

