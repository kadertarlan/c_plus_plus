#include <iostream>
using namespace std;

class line{
    int len;
   public:
    line(int n);
    ~line();
    void show(){ return len};
}

line::line(int n){
   len=n;
   cout << len;
}

line::~line(){
    cout << "alan serbest birakiliyor.." << endl;
}

/*void line::show(){
     char ch='-';
     int i;
     for(i=len;i>0;i--){
        return ch;}
}*/
int main(){
    line ob(5);
    //cout << "cizgi uzunlugunu girin:";
   // cin >> n;
  //  cout << ob.show() << endl;

}
