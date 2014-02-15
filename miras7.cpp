#include <iostream>
using namespace std;

class base{
   public:
    base(){ cout <<" temel sınıf olusturuluyor.." << endl;}
    ~base(){ cout << " temel sınıf yok ediliyor.."<< endl;}
};
class derived : public base{
   int j;
   public:
     derived(int n){
        cout << " türetilmiş sınıf olustururluyor.." << endl;
        j=n;}
     ~derived(){ cout << " türetilmiş sınıf yok ediliyor.." << endl;}
      void showj(){ cout << j << endl;}
};
int main(){
   derived ob(10);
   ob.showj();
}
