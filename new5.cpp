#include <iostream>
using namespace std;

class samp{
   int i,j;
 public:
   void set(int a,int b){ i=a; j=b;}
   int get(){ return i*j;}
};

int main(){
    int i;
    samp *p;
    p=new samp[4];
    if(!p){
         cout << " ayirma hatasi..";
         return 1;}
    for(i=0;i<4;i++){
         p[i].set(i,i);}
    for(i=0;i<4;i++){
         cout << "carpim [" << i << "]: ";
         cout << p[i].get() << "\n"; }
     delete [] p;
     return 0;
}
