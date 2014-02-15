#include <cstdlib>
#include <iostream>

using namespace std;

int st_fonk(int a){
    static int b=0;
    return a*(b++);
}

int main(int argc, char *argv[])
{
    int a=10;
    for(int i=0;i<10;i++)
            cout << st_fonk(a)<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
