#include <iostream>
using namespace std;

class samp{
    int a;
  public:
    void hat(int n){ a=n;}
    int get(){ return a;}
};

int main(){
    int i;
    samp ob[4];

    for(i=0;i<4;i++){  ob[i].hat(i);}
    for(i=0;i<4;i++){  cout << ob[i].get();}
}
