#include <iostream>
using namespace std;

int main(){
     int num;
     cout << " test edilecek sayiyi gir: ";
     cin >> num;
     
     if(num%2==0){ cout << "bu bir cift sayidir." << "\n";}
     else 
         cout << "bu bir tek sayidir." << "\n" ;

     return 0;
}