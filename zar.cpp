#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Zar{
  public:
  int ZarAt();            
      
};

int Zar::ZarAt(){
    srand ( time(NULL) );
    return (rand()%6)+1; 
}

int main(int argc, char *argv[])
{
    
    Zar z;
    cout << z.ZarAt()<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
