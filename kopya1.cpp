 #include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class strtype{
   char *p;
 public:
   strtype(char *s);
   ~strtype(){ delete [] p;}
   char *get(){ return p;}
};
strtype::strtype(char *s){
   int l;
   l=strlen(s)+1;
   p= new char [l];
   if(!p){ exit(1);}
   strcpy(p,s);
}
void show(strtype x){
   char *s;
   s=x.get();
   cout << a <<"\n";}
int main(){
   strtype a("hello");
   show(a);
}
