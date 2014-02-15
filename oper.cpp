#include <iostream>
using namespace std;

class topla{
   public:
     int x,y;
     topla(){
        x=0;
        y=0;}
     topla(int,int);
     topla operator+(topla);
};
topla::topla(int a, int b){ x=a; y=b;}
topla topla::operator+(topla kordinat){
    topla gecici;
    gecici.x=x+kordinat.x;
    gecici.y=y+kordinat.y;
    return gecici;}
main(){
   topla a(10,10);
   topla b(30,20);
   topla c;

   c=a+b;

   cout << " 1.sayi: " << c.x << endl;
   cout << " 2.sayi " << c.y << endl;
}

