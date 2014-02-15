#include <iostream>
using namespace std;

template <class type1, class type2> class myclass{
  type1 i;
  type2 j;
 public:
  myclass(type1 a, type2 b){
     i=a;   j=b;}
  void show(){  cout << i << "  " << j << endl;}
};

int main(){
   myclass<int, double> ob(10, 10.10);
   myclass<char,char *> ob2('x', "this is a test");
   
   ob.show(); // ınt ve double goster
   ob2.show(); // char ve char* goster

}

