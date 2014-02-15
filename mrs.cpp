#include <iostream>
using namespace std;

class array{
    int nums[10];
    public:
    array();
    void set(int n[10]);
    void show();
    array operator+ (array ob2);
    array operator- (array ob2);
    int operator== (array ob2);
};
array::array(){
    int i;
    for(i=0; i<10; i++){
        nums[i]=0;}
}
void array::set(int *n){
    int i;
    for(i=0; i<10; i++){
        nums[i]=n[i];}
}
void array::show(){
    int i;
    for(i=0; i<10; i++){
        cout << nums[i] << ' ' << "\n" ;}
    cout << endl;}

int main(){
    array o1,o2,o3;
    int i[10],j=0;
    for(j=0;j<10;j++){ i[j]=j;}
    o1.set(i);
    o2.set(i);
    o3=o1+o2;
    o3.show();

    o3=o1-o3;
    o3.show();
    if(o1==o2)  cout << " o1, o2 ye esittir\n";
    else  cout << "o1 , o2 ye eşit değildir.\n";

    if(o1==o3)   cout << " o1, o3 ye eşittir\n";
    else   cout << " o1 , o3 e eşit\n";

}
