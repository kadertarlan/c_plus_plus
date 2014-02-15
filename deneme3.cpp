#include <iostream>
using namespace std;

class card{
     char kitap_adi;
     char yazar;
     int adet;

  public:
     card(int i){
        adet=i;}

     void store(int);
     void show();
};
void card::store(int x){
    int i;
    string ch;
    string dizi[x][20];
    for(i=0;i<x;i++){
       cout << "kitap adını girin :" ;
       cin >> ch;
       dizi[i][20]=ch;}
   cout << "girdiginiz kitaplar: ";
   for(i=0;i<adet;i++){
         cout <<dizi[i];}

}
void card::show(){
     int i;
     cout <<" toplamda " << adet << "tane kitap var.";

}

int main(){
   card ob1(5);
   ob1.store(5);
   ob1.show();
   
}
     
