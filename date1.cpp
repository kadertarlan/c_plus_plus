#include <iostream>
using namespace std;


void date(char *date);
void date(int ay,int gun,int yil);

int main(){

   cout << " katar seklindeki date:" << date("15/01/2013") << endl;
   cout << " int seklınde date:" << date(15,08,2012) << endl;
}

void date(char *date){
     cout << date ;}

void date(int ay,int gun,int yil){
    cout << ay << "/" << gun << "/" << yil;}

