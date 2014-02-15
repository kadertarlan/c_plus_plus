#include <iostream>
using namespace std;

class samp{
    int a,b;
  public:
    samp(int i,int j){ a=i; b=j;}
    int get_a(){ return a;}
    int get_b(){ return b;}
};

int main(){
     samp ob[4]={ samp(9,8), samp(8,7), samp(7,6), samp(6,5)};
     samp *p;
     p=&ob[3]; // dizi icerigini tersten sıralayacak

   int i; 
   for(i=0;i<4;i++){
        cout << p->get_a() << "   " ;
        cout << p->get_b() << endl <<"\n";
        p--; // dizinin önce 4. sonra 3,2,1. ındıslerını basar.
}
//yukarıdakı for un aynı işini yapar
for(i=3;i>=0;i--){
     cout << ob[i].get_a() << "   ";
     cout << ob[i].get_b() << endl;
}
cout << endl;
} 
