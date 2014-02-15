#include <iostream>
#include <cstdlib>
using namespace std;

class array{ 
   int *p;
   int size;
 public:
   array(int sz){
      p=new int[sz];
      if(!p){ exit(1);}
      size=sz;
      cout << "normal constructor\n";}
   ~array(){ delete [] p;}
   array(const array &a); //kopya yapıcı
   void put(int i,int j){
      if(i>=0 && i<size) p[i]=j;}
   int get(int i){ return p[i];}
};
array::array(const array &a){
   int i;
   size=a.size;
   p=new int[a.size];
   if(!p){ exit(1);}
   for(i=0;i<a.size;i++){
     p[i]=a.p[i]; } //iceriği kopyala
  cout << "copy contructorda..\n";
}
int main(){
   array num(10);
   int i;
   for(i=0;i<10;i++){
      num.put(i,i);}
  for(i=9;i>=0;i--){
     cout << num.get(i) << endl;}
 // baska bır dizi olustur ve num ile hazırla.
  array x=num; //kopya yapılandırıcıyı uyandırır.

   for(i=0;i<10;i++) cout << x.get(i);
}

