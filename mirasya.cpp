#include <iostream>
using namespace std;

class base{
   int i;
 public:
   base(int n){ cout << "temel sınıf olusturulıyor.." << endl; i=n; }
   ~base(){  cout << "temel sınıf yıkıcıda.." << endl;}
   void showi(){  cout << i << endl;}
   void geti(int n){  i=n;}
};

class derived : public base{
   int j;
   public:
    derived(int n,int m) : base(n){
        cout << "turetilmis sınıfın yapıcısında.." << endl;
        j=m;}
    ~derived(){ cout << " turetılmıs sınıfın yıkıcısında.." << endl;}
     void showj(){ cout << j << endl;}
  };

int main(){

   derived ob(10,30);
   ob.showi();
   ob.showj();
   ob.geti(20);
   ob.showi();
   return 0;
}
