#include <iostream>
using namespace std;

class personel{
   public:
     personel(){ cout << "yapıcı personel..\n" ;}
     ~personel(){ cout << " yıkıcı personel..\n";}
};
class akademisyen : public personel{
   public:
     akademisyen(){ cout << "yapıcı akademısyen..\n" ;}
     ~akademisyen(){ cout << " yıkıcı akademisyen..\n";}
};
class idari : public personel{
   public:
     idari(){ cout << "yapıcı idari..\n" ;}
     ~idari(){ cout << " yıkıcı idari..\n";}
};
class ogrenci : public idari,public akademisyen{
   public:
     ogrenci(){ cout << " yapıcı ogrenci..\n";}
     ~ogrenci(){ cout << " yıkıcı ogrenci..\n";}
};

main(){
   ogrenci ob1;



}
