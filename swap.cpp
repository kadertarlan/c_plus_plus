 #include <iostream>

using namespace std;

void swap(int *a ,int *b){
     int *c;
     c=a;
     a=b;
     b=c;    
}
int main(){
    int x=4;
    int y=5;
    int *ptr;
   int *apr;
cout << "onceki degerler:" << x << "  "<<y << endl;
ptr=&x;
apr=&y;
swap(ptr,apr);

cout <<"sonraki degerler:" <<x << "   " << y<< endl;

}
