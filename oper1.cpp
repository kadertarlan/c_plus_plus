#include <iostream>
using namespace std;

class islem{
 public:
   int x,y;
   islem(){ x=0; y=0;}
   islem(int a,int b){ x=a; y=b;}
   islem operator+(islem);
   islem operator-(islem);
   islem operator=(islem);
   islem operator+(int sayi);
};

islem islem::operator+(islem ob){
   islem gecici;
   gecici.x=x+ob.x;
   gecici.y=y+ob.y;
   return gecici;
}

islem islem::operator-(islem ob){
   islem gecici;
   gecici.x=x-ob.x;
   gecici.y=y-ob.y;
   return gecici;
}

islem islem::operator=(islem ob){
   x=ob.x;
   y=ob.y;
   return *this;}
islem islem::operator+(int sayi){
   islem gecici;
   gecici.x=x+sayi;
   gecici.y=y+sayi;
   return gecici;
}
int main(){
  islem a(30,10);
  islem b(3,2);
  islem c;

  c=a+b;
  cout << "ilk toplam: " << c.x << endl;
  cout << "ikinci toplam: " << c.y << endl;

  c=a-b;
   cout << "ilk fark: " << c.x << endl;
   cout << "ikinci fark: " << c.y << endl;

  c=a;
  cout << " ilk atama:" << c.x << endl;
  cout << "ikinci atama: " << c.y << endl;

  c=a+10;
  cout << " a nin 10 ile ilk toplanmış hali:" << c.x << endl;
  cout << " a nın 10 ile 2. toplanmış hali:" << c.y << endl;
}
