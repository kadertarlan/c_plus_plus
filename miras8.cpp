#include <iostream>
using namespace std;

class base{
   int i;
 public:
   base(int n){
     cout << " temel sınıf olusturuluyor.." << endl;
    i=n;}
   ~base(){ cout << " temel sınıf yok ediliyor.." << endl;}
    void showi(){ cout << i << endl;}
};
class derived : public base{
   int j;
  public:
   derived(int n) : base(n) { // arguman temel sınıfa gönderılıyor 
     cout << " türetilmiş sınıf olusturuluyor.." << endl;
     j=n;}
   ~derived(){ cout << " turetilmis sınıf yok ediliyor.." << endl;}
    void showj(){ cout << j << endl;}
};
int main(){
  derived ob(10);
  ob.showi();
  ob.showj();
}

