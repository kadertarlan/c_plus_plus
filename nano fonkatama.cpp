#include <iostream>
using namespace std;

class samp{
    int i;
  public:
    samp(int n){ i=n;}
    int get|i(){    return i;}
};

int sqrt(samp o){
     return o.get_i() * o.get_i();
}

int main(){
    samp a(10),b(2);
    cout << sqrt(a) << endl;
    cout << sqrt(b) << endl;
    return 0;

}

