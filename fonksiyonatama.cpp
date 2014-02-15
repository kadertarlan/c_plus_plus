#include <iostream>
using namespace std;

class samp{
     int i;
   public:
    samp(int n){ i=n;}
    void set(int n){ i=n;}
    int get(){ return i;}
};

void sqrt(samp *eleman){
      eleman->set(eleman->get() * eleman->get());
      cout << " anın kopyası su degerın i degerine sahiptir:" << eleman->get() << endl;
}
int main(){
      samp a(10);
      sqrt(&a); // a nın adresını kopyalanır
      cout << "şimdi maindeki a değişti.." << endl;
      cout << a.get();
      return 0;
}
