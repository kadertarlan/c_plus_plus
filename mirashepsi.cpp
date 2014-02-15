#include <iostream>
using namespace std;
//temel sınıfın protected üyelerini türetilmiş sınıf public alıyorsa temel sınıfın pro ve publıc uyelerı turetılmıs ıcın protecten olur
//eger privete olraka alırsa temel sınfıın protecte ve publıc uyelerı turetılmıs sınıfın private üyesi olur 
class base{
  int x;
 public:
  void setx(int n){ x=n;}
  void showx(){  cout << x << endl;}
};

class derived:protected base{
  int y;
 public:
  void sety(int n){ setx(n);  y=n;}
  void showy(){  showx(); cout << y << endl;}
};

int main(){
  derived ob;
//  ob.setx(10);
  ob.setx(20);

//  ob.showx();
  ob.showy();
}


