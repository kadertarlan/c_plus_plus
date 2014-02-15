#include <iostream>
using namespace std;

class coord{
  int x,y;
 public:
  coord(){ x=0; y=0;}
  coord(int i,int j){ x=i; y=j;}
  int get_xy( int &i,int &j){ i=x; j=y;}
  coord operator+(coord &ob);
 // friend coord operator+(coord ob1,coord ob2);
 //friend coord operator+(coord ob1,int);
 //friend coord operator+(int,coord ob1);
 //friend coord operator++(coord &ob); // teklı operatorde referansla yolla arkads fonk a
//friend coord operator++(coord &ob, int notused); // ekleme sondaysa a++ seklınde
  coord operator-(coord &ob);
  coord operator-();
  coord operator=(coord ob);
  coord operator+(int i);
  int operator==(coord ob);
  int operator&&(coord ob);
  coord operator++();
};

coord coord::operator+(coord &ob){
   coord temp;
   temp.x=x+ob.x;
   temp.y=y+ob.y;
    return temp;
}
/*friend 
coord operator+(coord ob1,coord ob2){ // frıend de this isaretcisi yok tum operator yollanmalı
  coord temp;
  temp.x=ob1.x + ob2.x;
  temp.y=ob1.y + ob2.y;
  return temp;
} */
//not ! arkads operatorlerde ++ ve -- birli operatorlerı asırı yuklerken thıs ısaretcısı olmadıgı ıcın fonk ıcındekı degısıklık cagırma yapan nesneyı etkılemeyecek
//buna care olarak ıse terımı fomksıyona referansla gondermemız gerekır
/*coord operator++(coord &ob){
   ob.x++;
   ob.y++;
   return ob;}
 */
coord coord::operator-(coord &ob){
   coord temp;
   temp.x=x-ob.x;
   temp.y=y-ob.y;
   return temp;
}
coord coord::operator-(){
   x=-x;
   y=-y;
   return *this;
}
coord coord::operator=(coord ob){
  x=ob.x;
  y=ob.y;
  return *this;
}

coord coord::operator+(int i){
   coord temp;
   temp.x=x+i;
   temp.y=y+i;
   return temp;

}
int coord::operator==(coord ob){
  return x==ob.x && y==ob.y;
}
int coord::operator&&(coord ob){
  return (x&&ob.x) && (y&&ob.y);
}
coord coord::operator++(){  
  x++; y++;
  return *this;
}
//coord coord::operator++(int notused) ise ob1++; için kullanılır
int main(){
   coord ob1(10,10),ob2(2,3),ob3;
   int x,y;
   //friend fonk da boyle cagrılıyor fakat frıend ın bır artısı daha var 
//ınt la toplayacaksak ob3=ob1+100 yada ob3=100+ob1 seklınde yazılabılır zaten frıend ıkı arguman alıyor sıkıntı yok
   ob3=ob1+ob2;
   ob3.get_xy(x,y);
   cout << " ob1 + ob2 icin x:" << x  << " y: " <<y << endl;

   ob3=ob1-ob2;
   ob3.get_xy(x,y);
   cout << " ob1 + ob2 :   x:" << x << "  y: " << y << endl;

   ob1=-ob1;
   ob1.get_xy(x,y);
   cout <<"( ob=-ob1) :    x:"<< x << " y: " << y << endl;

   ob3=ob1;
   ob3.get_xy(x,y);
   cout << " ob3= ob1 :   x:" << x  << "  y: " << y << endl;

   ob3=ob1+5;
   ob3.get_xy(x,y);
   cout <<  " ob1+5,5 :  x: " << x << "  y: " << y << endl;

   if(ob1==ob2) cout << " Değerler eşittir..\n"	;
   else cout << " Değerler eşit değil..\n";

   if(ob1&&ob2) cout << "True \n";
   else cout << "False \n";

   ++ob1; // frıend fonk da boyle cagrılıyor
   ob1.get_xy(x,y);
   cout << " artırılmıs x :" << x << " y: " << y << endl;

   

}


