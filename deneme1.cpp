#include <iostream>
using namespace std;

class myclass{
     int x;
   public:
     void set(int a){
        x=a;}
     int get(){ return x;}
};

int main(){
    myclass ob;
    ob.set(8);
    cout <<  "sonucumuz:" << ob.get();
}
