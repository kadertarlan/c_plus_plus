#include  <iostream>
using namespace std;

class const samp{
     int i;
   puclic:
     const samp&(int n) { i=n;}
     void set_i(int n){ i=n;}
     int get_i(){
         return i;}
};
 void sqrt_in(const samp o){
    o.set_i(o.get_i() * o.get_i());
    cout << " anın kopyası şu degerin i değerine sahşptir:" << o.get_i();
    cout << "\n";
}

int main(){
     samp a(10);
     sqrt_in(a); // anın degerı atarıldı 
     cout << "fakat a.i maın içerisinde değişikliğe uğramaz.";
     cout << " a.get_i(); // 10 u gosteriri.
     return 0;

}

