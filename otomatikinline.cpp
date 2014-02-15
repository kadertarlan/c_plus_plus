#include <iostream>
using namespace std;

class myclass{
    int i,j;
  public:
    myclass(int x,int y){ i=x; j=y;}
    void show(){ cout << i  <<" "<< j <<endl;}

};

int main(){
    myclass ob(3,5);
    ob.show();
}

