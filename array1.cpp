#include <iostream>
using namespace std;

int & max(int a[],int size){
   int i=0;
   for(int j=0;j<size; j++){
     if(a[j] > a[i]) i=j;
     return a[i];
}
int main(){
  int array[]={12,-54,0,123,63};
  max(array,5)=22;

   for(int i=0;i<5;i++){
     cout << array[i] << "  " ;}
  cout << endl;
}
