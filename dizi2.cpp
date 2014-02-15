#include <iostream>
using namespace std;

class samp{
    int a;
 public:
    samp(int n){ a=n;}
    int get(){ return a;}
};

int main(){
    int i;
    samp ob[4]={2,4,6,8}; // samp ob[4]={ samp(2) ,samp(4), samp(6), samp(8) };

    for(i=0;i<4;i++){
       cout << ob[i].get()<< endl;}

}
