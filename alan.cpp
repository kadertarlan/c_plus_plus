#include <iostream>
using namespace std;

class karebul{
   public:
      
       int kenar;
       int alanbul(){
           return kenar * kenar;}
       int cevrebul(){
           return 4*kenar;}
};

int main(){
    karebul ilkkare;
    ilkkare.kenar=3;
    cout << "karenin alanı :" << ilkkare.alanbul() << endl ;
    cout << "karenin cevresi:" << ilkkare.cevrebul() << endl ;
    return 0; }

