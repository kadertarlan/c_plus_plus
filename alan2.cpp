#include <iostream>
using namespace std;

class karebul{
      int kenar;
   public:
       karebul(int kenargetir){
           kenar=kenargetir;}
       int alanbul(){
           return kenar * kenar;}
       int cevrebul(){
           return 4*kenar;}
       int kenargetir(){
           return kenar;}
       void kenardegistir(int kenar2){
          if(kenar2>0){
              kenar=kenar2;}
          else{
              cout << " sıfırdan büyük bir kenar uzunluğu gir:";
              cin >> kenar;} }
};

int main(){
    int kenar3;
    karebul ilkkare(8);
    cout <<  "kenar:" << ilkkare.kenargetir() << endl;
    cout << "karenin alanı :" << ilkkare.alanbul() << endl ;
    cout << "karenin cevresi:" << ilkkare.cevrebul() << endl ;

    ilkkare.kenardegistir(7);
    cout <<  "kenar:" << ilkkare.kenargetir() << endl;
    cout << "karenin alanı :" << ilkkare.alanbul() << endl ;
    cout << "karenin cevresi:" << ilkkare.cevrebul() << endl ;

    cout << " 3. karemizin kenar uzunluğunu siz girin:";
    cin >> kenar3;
    ilkkare.kenardegistir(kenar3);
    cout << "karenin alanı :" << ilkkare.alanbul() << endl ;
    cout << "karenin cevresi:" << ilkkare.cevrebul() << endl ;

    return 0; }



