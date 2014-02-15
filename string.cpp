#include <iostream>
#include <cstring>
using namespace std;

int main(){
   string s1,s2;
   string s3="hello world";
   string s4("ı am");
   
   s2=" today";
   s1=s3 + " " + s4;
   s1 += " 20 ";
   

   cout << s1 + s2 + "!" << endl;
}
