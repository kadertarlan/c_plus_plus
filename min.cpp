#include <iostream>
using namespace std;

int main(){
    int a,b,min,d;
    cout << "lutfen iki sayi girin :";
    cin >> a  >> b;
    if ( a>b){ min=a;}
    else min=b;
    
    for(d=2; d<min; d++){
      if((a%d==0) && (b%d==0)) break;}
      
    if(d==min){
	cout << "ortak payda yok " << "\n";
	   return 0;
	}
    cout << "en kucuk ortak payda " << d  << "\n";
    
    return 0;
    
}