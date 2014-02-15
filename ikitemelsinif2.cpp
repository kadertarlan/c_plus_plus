#include <iostream>
using namespace std;

class a{
   int i;
 public:
   a(int x){ i=x; 
   cout << " a nın yapıcısında..\n"; }
   int geta(){ return i;}
};

class b{
   int j;
  public:
   b(int y){ j=y;
    cout << "b nin yapıcısında..\n";}
   int getb(){ return j;}
};

class c : public a , public b{
   int k;
  public:
    c(int z) : b(z), a(z){
        k=z;
        cout << " c nin yapıcısında..\n"; }
    void show(){ cout  << geta() << "  " << getb() << "  "  << k << endl;}
};

int main(){
   c ob(10);
   ob.show();
}
