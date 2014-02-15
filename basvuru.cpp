#include <iostream>
using namespace std;

void fonk(int &n){
   n=100; n=n+100;}
int main(){
  int i=220;
  fonk(i);

   cout << "i nın yenı degeri: "  << i ;


}
