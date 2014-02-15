#include <iostream>
using namespace std;

int main(){
    int *p;
    p=new int[6];
    if(!p){
         cout <<"yer ayirma hatasi.. \n"; 
         return 0;}
    int i;
    for(i=0;i<6;i++){
       p[i]=i;}
    for(i=0;i<6;i++){
       cout << " p deki tamsayı [" << i << "] : ";
       cout << p[i] << endl;}
  delete [] p;
 return 0;
}
