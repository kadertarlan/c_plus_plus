#include <iostream>
using namespace std;

inline int abs(int n){
    return (n<0) ? -n:n;
}

inline double abs(double n){
     return (n<0) ? -n:n;
}

inline long abs(long n){
    return (n<0) ? -n:n;
 }


int main(){
    cout << abs(-10) << endl;
    cout << abs(-10L) << endl;
    cout << abs(-10.01) << endl;
}
