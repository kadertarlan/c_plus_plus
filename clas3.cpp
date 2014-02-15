#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 255

class strtype{
     char *p;
     int len;
  public:
     strtype();
     ~strtype();
     void set(char *ptr);
     void show();  };

strtype::strtype(){
    p=(char *)malloc(SIZE);
    if(!p){
        cout << "bellekte yer ayırma hatası..";
        exit(1);}
    *p='\0';
    len=0;}

strtype::~strtype(){
     cout << "p serbest bırakılıyor..";
     free(p);}

void strtype::set(char *ptr){
     if(strlen(p) >=SIZE){
      cout << "katar fazla buyuk." << endl;
      return;}
    strcpy(p,ptr);
    len=strlen(p);}

void strtype::show(){
     cout << p <<"   uzunlugu: " << len << endl;}

int main(){
     strtype s1,s2;
     s1.set("bu bir deneme");
     s2.set("ikinci deneme");
     s1.show();
     s2.show();
     return 0;
}

