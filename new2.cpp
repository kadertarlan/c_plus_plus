#include <iostream>
using namespace std;

int main(){
    int *p;
    p=new int (9);
    if(!p){
        cout << "bellekte yer ayırma hatası..\n";
        return 1;}
   cout << "p deki tam sayi: " << *p <<endl;
   delete p;
   return 0;
}
