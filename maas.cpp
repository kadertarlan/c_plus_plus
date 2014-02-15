#include <iostream>
using namespace std;

int main(){
     int i;
     int saat,gun,toplam;
     float maas,netmaas,mesai,net,k;
     cout << "lutfen bir ayda çalıştığınız toplam mesai saatini yazın:";
     cin >> i;
     cout << "\n" << "Lutfen maaşınızı yazın:";
     cin >> maas;
     cout << "\n";
     cout << "lutfen gunluk calısma saatinizi ve haftada kac gün çalıştıgınızı yazın:";
     cin >> saat >> gun;
     cout << "\n";
     
     toplam=4*saat*gun; // bır ayda kac saat calıstıgını
     
     k=maas/toplam; // saat bası ne kadar aldıgını bulduk
     
     mesai=i*k; //toplam mesai saatiyle saat bası ucretini carptık

     net=maas+mesai;
     
     cout << "Bu ay net " << net << " kadar maas alacasınız" << "\n";
     
     
     return 0;
}