#include <iostream>
using namespace std;

int sqrt(int n);
double sqrt(double n);
long sqrt(long n);

int main(){
    cout <<  " 10 un karesi: " << sqrt(10) << endl;
    cout << "10L nin karesi :" << sqrt(10L) << endl;
    cout << "10.01 in karesi:" << sqrt(10.01) << endl;
}

int sqrt(int n){
    return n*n;}

double sqrt(double n){
    return n*n;}

long sqrt(long n){
    return n*n;}
