#include <iostream>
 using namespace std;

class samp{
    int a,b;
  public:
    void set(int i,int j){ a=i; b=j;}
    int get(){ return a*b;}
};

int main(){
   samp *p;
   p=new samp[5];
   if(!p){ cout << "yer edinme hatası ";
      return 1;}
   int i;
   for(i=0;i<5;i++){
        p[i].set(i,i);}
   for(i=0;i<5;i++){
      cout << ":" << p[i].get() << endl;}
   delete [] p;
   return 0;
}
