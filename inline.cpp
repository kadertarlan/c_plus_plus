#include <iostream>
using namespace std;

inline int fonk(int x){
     return !(x%2);}

int main(){
     if(fonk(10))  cout << "10 bir cift sayidir\n";
     if(fonk(11))   cout << " 11 bir cift sayidir\n";
} 
