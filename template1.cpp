#include <iostream>
using namespace std;

/*class complext{
  float re, im;
  public:
   bool operator >(const complext &)const;
};

bool comlext::operator >(const complext &z)const{
   float f1=re*re + im*im;
   float f2=z.re* z.re + z.im*z.im;
   return (f1>f2);
}*/

template <class T>
const T max(T &v1, T &v2){
  return (v1>v2)? v1:v2;
}
int main(){
  int i1=6, i2=-5;
  char c1='s', c2='t';
  float f1=5.05, f2=12.3;
//  complext z1(1.3,5.6), z2(2.2,1.2);

  cout << max(i1,i2) << endl;
  cout << max(c1,c2) << endl;
  cout << max(f1,f2) << endl;
  //cout << max(z1,z2) << endl;
}

