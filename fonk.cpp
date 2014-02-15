#include <cstdlib> 
#include <iostream>

using namespace std;

class nokta{
  public:
    int x,y;
    void move(int,int);
    void print(){    cout << "degerler " << x << " , " << y << endl;}
     };

void nokta::move(int a,int b){
    x=a;
    y=b;} 
int main(){
    nokta ob;
    ob.x=12;
    ob.y=13;

    ob.print();
    ob.move(4,5);
    ob.print();
}
