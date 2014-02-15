#include <iostream>
using namespace std;

void f1(int a);
void f1(int a,int b);

int main(){
    f1(10);
    f1(10,20);
}

void f1(int a){
    cout << "tek argumanlı asırı fonksiyon elemanı:" << a << endl;
}

void f1(int a,int b){
    cout << "iki argumanlı asırı fonksiyon elemanları:" << a <<"  " << b << endl;
}

