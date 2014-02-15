#include <iostream>
using namespace std;

class dikdort{
    int x,y;

 public:
    void set(int,int);

    void alan(){ return (x*y);}
};

void dikdort::set(int a,int b){ 
     x=a;
     y=b;}


int main(){
    dikdort sonuc;
    sonuc.set(3,4);
    cout << "SONUC:"  << sonuc.alan() << endl;
}
