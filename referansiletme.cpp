#include <cstdlib>
#include <iostream>

using namespace std;

void arttir_normal(int sayi)
{

 sayi++;     
}

void arttir_isaretci(int *gosterici)
{
 *gosterici++;     
}

void arttir_referans(int &s)
{
 s++;     
}

int main(int argc, char *argv[])
{
    int sayi = 3;
    
    cout<<"Sayi : "<<sayi<<endl;
    
    arttir_normal(sayi);
    
    cout<<"Sayi : "<<sayi<<endl;
    
    arttir_isaretci(&sayi);
    
    cout<<"Sayi : "<<sayi<<endl;
    
    arttir_referans(sayi);
    
    cout<<"Sayi : "<<sayi<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
