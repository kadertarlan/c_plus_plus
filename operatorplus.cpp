#include <iostream>
using namespace std;

class coord{
    int x,y;
  public:
   coord(){ x=0; y=0;}
   coord(int i,int j){ x=i; y=j;}
   void get_xy(int &i, int &j){ i=x; j=y;}
   coord operator++();
};
coord coord::operator++(){
   coord temp;
   temp.x=x++;
   temp.y=y++;
   return *this;
}
int main(){
   coord o1(10,10),o2;
   int x,y;

   o2= ++o1; //o1++ la aynı olur aynı olmasın ıstıyorsan bır tane daha asırı yuk d-fon yazıarız
             // coord::coord::operator++(int notused) diye bu da o1++ deyimi icin gecerlı fonk olur
   o2.get_xy(x,y);
   cout << "(++o1)  x:" << x << ", y :" << y << endl;
}
