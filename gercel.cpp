#include <cstdlib>
#include <iostream>
using namespace std;

class karmasik{
public:
   int x,y;
   karmasik(){ x=0; y=0;}
   karmasik(int a,int b){ x=a; y=b;}
   karmasik operator+(karmasik);
   void goster(&i,&j){ i=x; j=y;}
};

karmasik karmasik::operator+(karmasik ob){
   karmasik gecici;
   gecici.x=x+ob.x;
   gecici.y=y+ob.y;
   return gecici;}

int main{
  karmasik a(2,3);
  karmasik b(3,4);
  karmasik c;
  int x,y;

   c=a+b;
   cout << " karmasik sayinin reel kısmı : " << c.x << "ve imajiner kısmı : "<< c.y << "i" << endl;
}
