#include <iostream>
using namespace std;

void space(int count){
  for( ; count; count--){ cout << ' ';}
}
void space(int count,char ch){
   for( ; count; count--){ cout << ch;}
}
int main(){
  void (*fp1)(int); //işaretci bıldırımı void (*a)(int); a=space;

  void (*fp2)(int,char); //isaretci bıldırımı  void (*b)(int,char); b=space;

  fp1=space; // space(int) adresını alır
  fp2=space; // space (int,char) adresını alır

  fp1(22);
  cout <<"|\n";

  fp2(30,'x'); // 30 tane x basar
  cout << "|\n";
}
