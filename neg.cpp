#include <iostream>
using namespace std;

class neg{
    int *p;
  public:
    neg(int i);
    ~neg(){
         cout << " yok ediliyor..." << endl;}
         free(p);}
    int get(){ return *p;}
};
neg::neg(int i){
    p=(int *)malloc(sizeof(int));
    if(!p){
         cout << "yer ayırma hatası..\n";
          exit(1);}
    *p=i;
}
int fonk(neg ob1){
    return -ob1.get();}

int main(){
     neg ob(56);
     fonk(ob);
     cout << ob.get();
     cout << fonk(ob);

}
