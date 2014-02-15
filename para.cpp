#include <iostream>
using namespace std;

class vektor{
    public x,y;
    vektor(){};
    vektor(int,int);
    vektor operator+ (vektor);

};

vektor::vektor(int a,int b){
     x=a;
     y=b; }
vektor vektor::operator+ (vektor param){
     vektor temp;
     temp.x=x + param.x;
     temp.y=y +param.y;
     return (temp);
}

int main () {
  vector a (3,1);
  vector b (1,2);
  vektor c;
  c = a + b;
  cout << c.x << "," << c.y;
  return 0;
}
