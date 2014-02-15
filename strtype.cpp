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
      void show();
};

//katar nesnesinin hazırlığı

strtype::strtype(){
      p=(char*) malloc(SIZE);
      if(!p){
           cout << "bellekte yer ayırma hatasi\n";
           exit(1);}
     *p='\0';
     len=0;}

//katar nesnesi yok edilirken bellek de serbest kalıyor
strtype::~strtype(){
    cout << "p, serbest bırakılıyor.\n";
    free(p);}

void strtype::set(char *ptr){
     if(strlen(p) >= SIZE){
         cout << "katar fazla buyuk\n";
         return;}
    strcopy(p,ptr);
    len=strlen(p);}
void strtype::show(){
     cout << p << " --uzunlugu: " << len << "\n";
}
void main(){
      strtype s1,s2;
      s1.set("bu bir deneme..");
      s2.set(" C++ zor gibi.");
      s1.show();
      s2.show();
      return 0;}