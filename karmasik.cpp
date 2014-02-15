#include <iostream>
using namespace std;

class karmasik{
  double gercel;
  double sanal;
 public:
  karmasik(double gercel=0, double sanal=0);
  void get_xy(double &x, double &y){ x=gercel; y=sanal;}
  karmasik operator+(karmasik &sayi);
  karmasik operator-(karmasik &sayi);
  karmasik operator%(karmasik &sayi);
  karmasik operator=(karmasik sayi);
  friend ostream & operator<<(ostream &output, karmasik &sayi);
  friend istream &operator>>(istream &input,karmasik &sayi);
};
karmasik::karmasik(double gercel, double sanal){
   this->gercel=gercel;
   this->sanal=sanal;
}
karmasik karmasik::operator+(karmasik &sayi){
  karmasik temp;
  temp.gercel=gercel+sayi.gercel;
  temp.sanal=sanal+sayi.sanal;
  return temp;
}
karmasik karmasik::operator-(karmasik &sayi){
  karmasik temp;
  temp.gercel=gercel-sayi.gercel;
  temp.sanal=sanal-sayi.sanal;
  return temp;
}
karmasik karmasik::operator%(karmasik &sayi){
   double yeni_gercel=0, yeni_sanal=0;
   return karmasik(yeni_gercel, yeni_sanal);
}
karmasik karmasik::operator=(karmasik sayi){
  gercel=sayi.gercel;
  sanal=sayi.sanal;
  return *this;
}
ostream & operator<<(ostream &output, karmasik &sayi){
   output<<sayi.gercel<< "+" << sayi.sanal << "i";
  return output;
}
istream &operator>>(istream &input, karmasik &sayi){
  input >>sayi.gercel;
  input.ignore(3);
  input>> sayi.sanal;
  input.ignore();
  return input;
}
int main(){
  karmasik ks1(3.14,8.25), ks2(12.2,12.3);
  karmasik ks3;
  karmasik toplam,fark,mod;
  double x,y;

  toplam=ks1+ks2;
  cout << toplam << endl;

  fark=ks1-ks2;
  cout<<fark << endl;  

  mod=ks1%ks2;
  cout << mod << endl;

  cout <<" a + bi formatında karmasik sayi girin:" ;
  cin >> ks3; 
  cout <<endl <<  "karmasik sayi:" << ks3 << endl;
  ks3.get_xy(x,y);
  cout << "gercel kısım: " << x << "  sanal kısım: " << y << endl;
}
