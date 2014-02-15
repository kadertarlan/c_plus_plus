#include <iostream>
#include <cstring>
using namespace std;

class myclass{
    char dizi[20];
    double cost;
    int sayi;
 public:
    myclass(char *d, double c,int i){
         strcpy(this->dizi,d);
         this->cost=c;
         this->sayi= i;
}
    void show();
};

void myclass::show(){
     cout << this->dizi << endl;
     cout << " double sayi: "    << this->cost << endl;
     cout << "sayi: " << this->sayi << "\n";
}

int main(){
     myclass ob("uzunluk", 3.45,7);
     ob.show();
} 
