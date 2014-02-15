#include <iostream>
using namespace std;

class samp{
    int i;
 public:
    void set(int n){ i=n;}
    int get(){ return i;}
};

int main(){
     samp ob[5];
     int i;
     int j=10;

    for(i=0;i<5;i++){
       ob[i].set(j);
       j=j+10;
   }
    for(i=0;i<5;i++){
        cout << ob[i].get()<< endl;}
}
