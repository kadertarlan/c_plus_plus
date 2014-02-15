#include <iostream>
using namespace std;

int main(){
     int *p;
     p=new int; //tam sayı için bellekten yer ayırır.

    if(!p){ cout << "yer ayırma hatası.. \n";
    return 1;
}

    *p=1000;
    cout << " p deki tamsayi:" << *p << "\n";
    delete p; // bellegı serbest bırakır.
    return 0;
}
