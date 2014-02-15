#include <iostream>
using namespace std;
 
int main(){
    float fit,inc;
    do{
       cout << "lutfen fit miktarını giriniz:";
       cin >> fit;
       cout << "\n";
       inc=fit*12;
       cout  << "girdiginiz fit degeri " << inc << " inc eder.";
       cout << "\n"; } while(fit !=0);

return 0; }
    
    