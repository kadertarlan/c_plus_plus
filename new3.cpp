#include <iostream>
using namespace std;

class samp{
    int a,b;
 public:
    samp(int i,int j){
         a=i; b=j;}
    int get(){ return a*b;}
};

int main(){
    samp *p;
    p=new samp(8,9);
    if(!p){ cout << " bellekte yer ayırma hatası..\n";
    return 1;
}
    cout << "carpim: " << p->get();
   delete p;
   return 0;
}
