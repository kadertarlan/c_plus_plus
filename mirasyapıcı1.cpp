#include <iostream>
using namespace std;

class base{
   public:
   base(){ cout << "temel sınıf olusturulıyor.." << endl;}
   ~base(){  cout << "temel sınıf yıkıcıda.." << endl;}
};
class derived : public base{
   public:
    derived(){ cout << "turetilmis sınıfın yapıcısında.." << endl;}
    ~derived(){ cout << " turetılmıs sınıfın yıkıcısında.." << endl;}
};

int main(){

   derived ob();
}

