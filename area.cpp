#include <iostream>
using namespace std;

class area{
     int uzunluk;
     int genislik;
  public:
     area(int ,int);
     int alan(){ return (uzunluk*genislik);}
};

area::area(int a,int b){
     uzunluk=a;
     genislik=b;}

int main(){
     area ob(4,5);
     cout << " uzunlukları 4m ve 5m olan bahçenin alanı:" << ob.alan() << endl;} 
