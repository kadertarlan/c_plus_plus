#include <iostream>
using namespace std;

class fonk{
    int i,j;
  public:
   fonk(int a,int b);
   int dondur();
};

fonk::fonk(int a,int b){
    i=a;
    j=b;
}

inline int fonk::dondur(){
    return !(i%j);}

int main(){
   fonk ob(10,5);
   if(ob.dondur()) cout << " 10 , 5 tam bolunur.";
}
