#include <iostream>
#include <cstring>
using namespace std;

class samp{
    char s[20];
  public:
    void show(){ cout << s << "\n";
    void set(char *str){ srtcpy(s,str);}
};
samp input(){
    char s[20];
    samp str;
    cout << "bir katar gir:";
    cin >> s;
    str.set(s);
    return str;
}

int main(){
     samp ob;
     ob=input();
     ob.show();

}
