#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
   vector <int> liste;

   liste.push_back(12);
   liste.push_back(5);
   liste.push_back(40);
   liste.push_back(32);
   liste.push_back(7);

   sort(liste.begin(), liste.end());

   for(int i=0; i< liste.size() ; i++){
     cout << liste[i] << endl;
}

 }
