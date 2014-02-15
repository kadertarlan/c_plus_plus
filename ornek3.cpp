#include <iostream>
using namespace std;

int main(){
     char ch;
     cout << "Tuslara bas , cikis icin x e bas.\n" ;
     do{
       cout <<": ";
       cin >> ch;
     } while (ch != 'x');
     
     return 0;
}