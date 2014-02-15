#include <iostream>
using namespace std;


class base{
   public:
     int i;
};

class derived1 : virtual public base{ // vırtual ıle base aıt tek bır kopya olusturacagız derıved3 ıcın
    public:
     int j;
};

class derived2 : virtual public base{
    public:
      int k;
};

class derived3 : public derived2, public derived1{
    public:
      int product(){   return i * j * k;}
};

int main(){
   derived3 ob;

   ob.i=10;
   ob.j=20;
   ob.k=30;

   cout << "  carpım sonuc: " <<  ob.product() << endl;

}

