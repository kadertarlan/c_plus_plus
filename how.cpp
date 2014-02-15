#include <iostream>
#include <cctype>
using namespace std;

const int ignore=0;
const int upper=1;
const int lower=2;

void print(char *s,int how=-1);
int main(){
// belirtildiği şekilde basar belirtilmemişse son halini basar.
    print("merhaba\n",ignore);
    print("merhaba\n",upper);
    print("merhaba\n");
    print("MERhABA\n",lower);
    print("Merhaba\n");
}

void print(char *s, int how=-1){
   static int oldcase=ignore;

   if(how<0) how=oldcase;
   while(*s){
     switch(how){
       case upper: cout << (char) toupper(*s);
         break;
       case lower: cout << (char) tolower(*s);
         break;
       default: cout << *s;
}
    s++;
}
    oldcase=how;
}

