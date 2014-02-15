#include <iostream>
using namespace std;

class samp{
     int i;
  public:
    samp(int n){   i=n;}
    void set(int n){ i=n;}
    int get(){ return i;}
};

void sqrt(samp o){
    o.set(o.get() * o.get());
    cout << " a nın kopyası su degerin i degerine sahiptir: " << o.get() << endl;
    }
int main(){
    samp a(20);
    sqrt(a); // a nın degerını fonksoyona atama 
    cout << " fakat a.i main icinde degişikliğe uğramaz.";
    cout << a.get();
}
