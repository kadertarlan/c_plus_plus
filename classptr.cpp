#include <iostream>
using namespace std;

class point{
    int uzunluk,genislik;
  public:
   void set(int,int);
   int alan(){ return uzunluk*genislik;}
};

void point::set(int a,int b){
     uzunluk=a;
     genislik=b;}

int main(){
     point a,*b,*c;
     point * d=new point[2];
     b=new point;
     c=&a;
     a.set(1,2);
     b->set(3,4);
     d->set(5,6);
     d[1].set(7,8);
     cout << " a area:" << a.alan() << endl;
     cout << "*b area: " << b->alan() << endl;
  cout << "*c area: " << c->alan() << endl;
  cout << "d[0] area: " << d[0].alan() << endl;
  cout << "d[1] area: " << d[1].alan() << endl;
  delete[] d;
  delete b;
}
