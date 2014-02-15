#include <iostream>
using namespace std;

class myclass{
     int n,d;
   public:
     myclass(int i,int j){
        n=i;
        d=j;
}
    friend int arkads(myclass ob);
};

int arkads(myclass ob1){
    if(!(ob1.n% ob1.d)) return 1;
    else return 0;

}

int main(){
    myclass ob(9,4);
    if(arkads(ob)) cout << " 9 , 4 un tam katıdır.";
    else  cout  <<" 9 4 ün tam katı degildir.";
    }

