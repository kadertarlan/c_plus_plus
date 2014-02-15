#include <iostream>
using namespace std;
  class fonk{
     int i;
   public:
     fonk(int n){
          i=n;
          cout << " contructorda.." ;}
     ~fonk(){
          cout << "destructorda.."; }
     int get(){ return i;}
     void set(int n){ i=n;}
};

int sqrt(fonk ob1){
   ob1.set(ob1.get() * ob1.get());
   cout << "sqrt fonk icinde ki deger: " << ob1.get() << endl;
}

int main(){
    fonk ob(10);
    sqrt(ob);
    cout << " main icindeki deger:" << ob.get()<< endl;
}
