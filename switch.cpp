#include <iostream>
using namespace std;

int main(){
     int x,y,z;
     
     cout << "birinci sayiyi gir:";
     cin >> x;
     cout << "\n";
 
     cout << "ikinci sayiyi gir:";
     cin >> y;
     cout << "\n";

     cout << "secimini yap:\n 1- toplama\n 2- cıkarma\n =";
     cin >> z;

     cout << "sonucun:";
    
     switch(z){
            case 1:
                  cout << x+y << endl;
                  break;
            case 2:
                  cout << x-y << endl;
                  break;
            default:
                  cout << "yanlış işlem";
                  break; }
     }
