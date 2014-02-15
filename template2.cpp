#include <iostream>
using namespace std;

template <class atype, class btype>
btype find(const atype* array, atype value, btype size){
  for(btype=0; i<size; i++){
     if(array[i]==value) return i;
  return static_cast<btype>(-1);

}

int main(){

char charr[]={'s', 'r','9' , 'y', 'h','q'};
char ch='h';
int intt[]={1,2,4,6,7,8,13};
int in=13;
double durr[]={1.2,3.3,5.4,6.7,8.7};
double db=3.3;

  cout <<" 'h' index:" << find(charr,ch,6);
  cout << " 13 index:" << find(intt,in,7);
  cout << " 3.3 index:" << find(durr,db,5);
}
  
