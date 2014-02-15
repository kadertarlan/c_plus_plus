#include <iostream>
using namespace std;


//temel sınıf tanımlanıyor  
class b{
     int i;
  public:
     void set_i(int n);
     int get_i();
     };

//alt sınıf tanımlanıyor  // alt sınıf sadece public bileşenleri miras alabilir
class d : public b{
    int j;
  public:
    void set_j(int n);
    int mu1();
};

//temel sınıf için i degerı verılıyor.
void b::set_i(int n){
     i=n;
}

//temel sınıf için i degeri döndürür
int b::get_i(){
     return i;}
  
// alt sınıf ıcın j degeri veriliyor.   
void d::set_j(int n){
     j=n;
}

//temel sınıfın i si çarpı alt sınfıın j si degerının dondurulmesi 
int d::mu1(){
     //alt sınıf temel sınıfın public fonk çağırır
     return j * get_i();}
int main(){
     d ob;
     ob.set_i(10); //temel sınıfta i ye deger verılıyor
     ob.set_j(4); // alt sınıfta j ye deger veriliyor
      cout << ob.mu1();  //ekranda 40 gösterir
      return 0;
}