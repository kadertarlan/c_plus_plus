#include <iostream>
using namespace std;

class arkadas{
   int n,d;
  public:
   arkadas(int i,int j){
      n=i;
      d=j;
      cout << " constructorda..." << endl;
}
   ~arkadas(){
        cout << "yok ediyorum..\n";}

   void show(){
       cout << n << d;}

   friend int arkadasim(arkadas ob);
};

int arkadasim(arkadas ob){
     if(!(ob.n%ob.d)){ return 1;}
     else
         return 0;
}

int main(){
     arkadas ob(9,9);
     if(arkadasim(ob)){
         cout << " benim tam katımdır .. "<< endl;}
     else{
          cout << "benim katım değildir..." << endl;
}
}
