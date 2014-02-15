#include <iostream>
using namespace std;

int abs(int n);
long abs(long n);
double abs(double n);

int main(){
     cout << " -10 un mutlak degeri:" << abs(-10)<< endl;
     cout << " -10L nin mutlak degeri:" << abs(-10L) <<endl;
     cout << " -10.01 in mutlak degeri:" << abs(-10.01) << endl;

}

int abs(int n){
     cout << "tam sayilar icin abs..\n";
     return n<0 ? -n : n;}

long abs(long n){
    cout << "long sayilar icin abs..\n";
    return n<0 ? -n : n;}

double abs(double n){
    cout << " double sayilar icin abs..\n";
    return n<0 ? -n :n;}


