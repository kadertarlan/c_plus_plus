#include <iostream>
 using namespace std;

class dizi{
    int a;
  public:
    dizi(int i){ a=i;} 
    void set(int i){ a=i;}
    int get(){ return a;}
};

int main(){
    int i;
    dizi ob[4]={ dizi(2),dizi(3),dizi(4),dizi(5)};
    for(i=0;i<4;i++){ cout << ob[i].get();}
    cout << endl;
    for(i=0;i<4;i++){ ob[i].set(i);}
    for(i=0;i<4;i++){ cout << ob[i].get();}
    cout << endl;
    
}
