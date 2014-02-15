#include <iostream>
using namespace std;

class a{
   public:
     int i;
};
class b : virtual public a{
   public:
     int j;
};

class c : virtual public a{
   public:
     int k;
};

class d : public b,public c{
   public:
      int carpma(){
        return i*j*k;}
};
main(){
   d ob;
   ob.i=2;
   ob.j=3;
   ob.k=5;

   cout << "\n carpma:"  <<  ob.carpma() << endl;
}
