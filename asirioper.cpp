#include <iostream>
using namespace std;

class coord{
   int x,y;
 public:
   coord(){ x=0; y=0;}
   coord(int i, int j){ x=i; y=j;}
   void get_xy(int &i, int &j){ i=x; j=y;}
   coord operator+(coord ob2); // + operatoru coord sınıfı için aşırı yüklenmektedir.
};
coord coord::operator+(coord ob2){
   coord temp;
   temp.x=x+ob2.x;
   cout << ob2.x;
   cout << x;
   temp.y=y+ob2.y;
    return temp;
}

int main(){
   coord o1(2,3), o2(4,5), o3;
   int x,y;
   o3=o1+o2; //iki nesneyi toplar operator+() cagırır.
   o3.get_xy(x,y);
   cout << "(o1+o2) x:" << x << ", y: " << y << "\n";
}

