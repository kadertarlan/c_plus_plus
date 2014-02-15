#include <iostream>
using namespace std;

class islem{
   int x,y;
 public:
    islem(){ x=0; y=0;}
    islem(int a, int b){ x=a; y=b;}
    int operator<(islem);
    int operator>(islem);
};

int islem::operator<(islem ob){
   return x < ob.x && y< ob.y;}


int islem::operator>(islem ob){
   return x> ob.x && y>ob.y;}

int main(){
   islem a(1,4);
   islem b(3,6);

   if(a>b)
     cout << " a nın 2 degeride b den buyuk." << endl;
   else
     cout << " a nın 2 degeride b den buyuk degildir." << endl;



    if(a<b)
      cout << " a nın iki degeri de b den kucuktur." << endl;
   else
      cout << " a nın iki degeri de b den kucuk değil." << endl;
}
