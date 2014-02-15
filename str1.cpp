#include <iostream>
#include <cstring>
 using namespace std;


class samp{
    char s[20];
  public:
    void show(){ cout << s << endl;}
    void set(char *str){ strcpy(s,str);}
};

int main(){
    samp ob;
    char s1[20];
    cout << "lutfen adınızı girin:";
    cin >> s1;
    ob.set(s1);
    ob.show();
}

