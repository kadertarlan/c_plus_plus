#include <iostream>
using namespace std;

class personel{
   public:
     personel(){ cout << "yapıcı personel..\n" ;}
     ~personel(){ cout << " yıkıcı personel..\n";}
};
class akademisyen : private personel{
   public:
     akademisyen(){ cout << "yapıcı akademisyen..\n" ;}
     ~akademisyen(){ cout << " yıkıcı akademisyen ..\n";}
};
class idari : private personel{
   public:
     idari(){ cout << "yapıcı idari..\n" ;}
     ~idari(){ cout << " yıkıcı idari..\n";}
};
class arasgor : public akademisyen{
   public:
     arasgor(){ cout << "yapıcı arasgor..\n" ;}
     ~arasgor(){ cout << " yıkıcı arasgor..\n";}
};
class ogrgor :public akademisyen{
   public:
     ogrgor(){ cout << "yapıcı ogrgor..\n" ;}
     ~ogrgor(){ cout << " yıkıcı ogrgor..\n";}
};
int main(){
   ogrgor mastar;
   cout << "merhaba\n";
}
