#include <iostream>
using namespace std;

class sekil{
  protected: 
   int uzunluk;
  public:
    sekil(int yeni_uzunluk): uzunluk(yeni_uzunluk){}
    virtual void yazdir() const=0;
};
class dogru:public sekil{
   public:
    dogru(int yeni_uzunluk):sekil(yeni_uzunluk){}
    void yazdir() const{
      cout << "uzunluk" << uzunluk << endl;}
};

class ucgen:public sekil{
  public:
   int uzunluk2,uzunluk3;
   ucgen(int yeni_uzunluk, int yeni_uzunluk2, int yeni_uzunluk3): sekil(yeni_uzunluk), uzunluk2(yeni_uzunluk2),uzunluk3(yeni_uzunluk3){}
   void yazdir() const{
     cout<<"Kenar 1: "<<uzunluk<<endl;
     cout<<"Kenar 2: "<<uzunluk2<<endl;
     cout<<"Kenar 3: "<<uzunluk3<<endl;}
};
void goster(sekil &ob){
   ob.yazdir();
 }
int main(){
  dogru o1(10);
  ucgen o2(3,4,5);
  goster(o1);
  goster(o2);
}
