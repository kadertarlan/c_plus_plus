#include <iostream>
using namespace std;

struct kare{

     kare(int x){
         kenar=x;
         alan=kenar*kenar;
         cevre=4*kenar;
         cout << "constructor da .." << endl;}
 
    ~kare(){
         cout << "destructor da..";}
    void goruntule(){
         cout << "kenar:" << kenar << "  " << "alan:" << alan << "  " << "cevre:" << cevre << endl;}

    void kenardegistir(int y){
         kenar=y;
         alan=kenar*kenar;
         cevre=4*kenar;}
   private:
      int kenar;
      int alan;
      int cevre;

};




int main(){

    kare ob1(3),ob2(4),ob3(5);
    ob1.goruntule();
    ob2.goruntule();
    ob3.goruntule();

    ob1.kenardegistir(6);
    ob2.kenardegistir(7);
    ob3.kenardegistir(8);


    ob1.goruntule();
    ob2.goruntule();
    ob3.goruntule();

 }
