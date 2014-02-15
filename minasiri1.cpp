#include <iostream>
using namespace std;

int min(int n,int m);
double min(double k,double l);

int main(){

    min(4,5);
    
}

int min(int n,int m){
    if(n<m)
       cout " << n << " ve " << m << "sayilarindan küçük olani:" << n << endl;
    else
       cout " << n << " ve " << m << "sayilarindan küçük olani:" << m << endl;
}


//double min(double n,double m){
  //  if(n<m) 
    //   cout " << n << " ve " << m << "sayilarindan küçük olani:" << n << endl;
  //  else
   //    cout " << n << " ve " << m << "sayilarindan küçük olani:" << m << endl
//}
