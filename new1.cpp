#include <iostream>
using namespace std;

class samp{
    int i,j;
 public:
    void set(int a,int b){ this->i=a; this->j=b;}
    int get_i(){ return this->i;}
    int get_j(){  return this->j;}
    int get(){ return this->i*this->j;}
};

int main(){
     samp *p;
     p=new samp; // nesne için yer al
     if(!p){
        cout << "bellekte yer ayırma hatası..";
        return 1;}

     p->set(4,5);
     cout << p->get_j() << " sayisi ile " <<  p->get_i() << " sayilarinin carpimi: ";
     cout <<  p->get() << endl;
     return 0;

}

