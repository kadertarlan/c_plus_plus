#include <iostream>
 using namespace std;

class matris{
    int a,b;
  public:
     matris(int i,int j){ a=i, b=j;}
     int get_a(){ return a;}
     int get_b(){ return b;}
};

int main(){
    matris ob[4][2]={ matris(1,2), matris(9,8),
                      matris(3,4), matris(8,7),
                      matris(5,6), matris(7,6),
                      matris(7,8), matris(6,5)};
   int i;
    for(i=0; i<4; i++){
        cout << ob[i][0].get_a() << ' ';
        cout << ob[i][0].get_b() << "\n";
        cout << ob[i][1].get_a() << ' ';
        cout << ob[i][1].get_b() << "\n";}
}

