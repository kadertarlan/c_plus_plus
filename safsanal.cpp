#include <iostream>
using namespace std;
//line ekrana dogru parcası cızer
//rectangle ve cırcle de ekrana dikdörtgen ce çember çizer
class generic_shape{ //soyut sınıf
  protected:
    int x,y;
  public:
    generic_shape(int x1,int y1){ x=x1; y=y1;}
    virtual void draw() const=0; // saf sanal fonk . bu fonk sayesinde sınıfımızın soyut olduğunu derleyiciye bildirdik.
};
class Line:public generic_shape{
   protected:
     int x2,y2;
   public:
    Line(int x1,int y1,int x,int y):generic_shape(x,y)
        { x2=x1; y2=y1;}
    void draw() const{ line(x,y,x2,y2);}
};

class Rectangle:public Line{
   public:
     Rectangle(int xl,int yl,int xg,int yg):Line(xl,yl,xg,yg){}
     void draw() const( rectangle(x,y,x2,y2);}
};
class Circle:public generic_shape{
   protected:
     int radius;
   public:
     Circle(int xg,int yg,int sayi):generic_shape(xg,yg){ radius=sayi;}
     void draw() const{ circle(x,y,radius);}
};
void show( generic_shape &shape){
   shape.draw();}

int main(){
   Line line1(1,1,100,250);
   Circle circle1(100,100,20);
   Rectangle rectangle1(30,50,250,140);
   show(circle1);
   show(line1);
   show(rectangle1);
  }

       
