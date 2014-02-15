#include <iostream>
using namespace std;


float fraction(int num, int denom){
 if(denom==0) throw " divided by zero";
 if (denom <0) throw "negative denominator..";
 if (denom>1000) throw -1;
 return static_cast<float>(num)/denom;
}
 int main(){
  int numerator, denominator;
  cout << endl << "enter to numerator:" << endl;
  cin >> numerator;

  cout << "enter to denaminator:" << endl;
  cin >> denominator;

try{
    fraction(numerator,denominator);
  }
catch(const char *result){
  cout << endl << result;
}
catch(int){ cout << "ERROR..";}
cout<< endl << " end of program.. " << endl;
}
