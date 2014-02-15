#include <iostream>
using namespace std;

int min(int n,int m);
double min(double n,double m);

int main(){
    int x,y;
    double d,f;
    cout << " kıyaslayacağın int sayilari gir"; 
    cin >> x >> y;
    cout << "kıyaslayacağın double sayilari gir:";
    cin >> d >>f;

    min(x,y);
    min(d,f);
}

int min(int n,int m){
    if(n<m)
       cout " << n << " ve " << m << "sayilarindan küçük olani:" << n << endl;
    else
       cout " << n << " ve " << m << "sayilarindan küçük olani:" << m << endl;
}


double min(double n,double m){
    if(n<m) 
       cout " << n << " ve " << m << "sayilarindan küçük olani:" << n << endl;
    else
       cout " << n << " ve " << m << "sayilarindan küçük olani:" << m << endl;
}

