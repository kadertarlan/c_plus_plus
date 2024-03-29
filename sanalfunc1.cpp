#include <iostream>
using namespace std;

class area{
    double dim1, dim2;
  public:
    void setarea(double d1,double d2){
      dim1=d1; dim2=d2;}
    void getdim(double &d1,double &d2){
      d1=dim1;   d2=dim2;}
    virtual double getarea()=0; // saf sanal fonk
};

class rectangle : public area{
   public:
    double getarea(){
      double d1,d2;
      getdim(d1,d2);
      return d1*d2;}
};

class triangle : public area{
  public:
    double getarea(){
      double d1,d2;
      getdim(d1,d2);
      return 0.5 * d1*d2;}
};

int main(){
   area *p;
   rectangle r;
   triangle t;
   
   r.setarea(2.0,3.0);
   t.setarea(3.5,1.5);

   p=&r;
   cout << " rectangle has area: " << p->getarea() << endl;

   p=&t;
   cout << " triangle has area: " << p->getarea() << endl;

}
   
