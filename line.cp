#include <iostream>
using namespace std;

class line{
    int len;
   public:
    line(int n);
    ~line();
    void show();
}

line::line(int n){
     len=n;
}

line::~line(){
    cout << "alan serbest birakiliyor.." << endl;
}

line::show(){
     char ch='-'
     return len * ch;
}
int main(){
    line ob(int n);
    cout << "cizgi uzunlugunu girin:";
    cin >> n;
    cout << ob.show(); << endl;

