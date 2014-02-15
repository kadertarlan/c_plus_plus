#include <iostream>
using namespace std;
class coord{
   int x,y;
 public:
   coord(){ x=0; y=0;}
   coord(int i,int j){ x=i; y=j;}
   void get_xy(int &i, int &j){ i=x; j=y;}
   coord operator+(coord ob2); //ob+ob
   coord operator+(int i); // ob+int
   coord operator*(coord ob2);
};
coord coord::operator+(coord ob2){
   coord temp;
   temp.x=x+ob2.x;
   temp.y=y+ob2.y;
   return temp;
}
coord coord::operator+(int i){
   coord temp;
   temp.x=x+i;
   temp.y=y+i;
   return temp;
}
coord coord::operator*(coord ob2){
  coord temp;
  temp.x=x*ob2.x;
  temp.y=y*ob2.y;
  return temp;
}

int main(){
  coord o1(10,5),o2(15,1),o3;
  int x,y;
  o3=o1+o2;
  o3.get_xy(x,y);
  cout << "(o1+o2)  x: " << x << ",y: " << y << endl;

  o3=o1+100;
  o3.get_xy(x,y);
  cout << "(o1+100) x: "<<x << ",y: "<< y << endl;

  o3=o1*o2;
  o3.get_xy(x,y);
  cout << " (o1*o2)  x: " << x << ", y: " <<  y << endl;

}

