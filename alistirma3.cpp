#include <iostream>
#include <cstring>
using namespace std;

struct Person{
  char name[40];
  int reg_num;
};
void print(const Person &k){
  cout << "Name:" <<k.name << endl;
  cout << "Num: " << k.reg_num << endl;
}
 

int main(){
    Person ahmet;
    strcpy(ahmet.name, "ahmet uzun");
    ahmet.reg_num=234;
    print(ahmet);
   

}
  
