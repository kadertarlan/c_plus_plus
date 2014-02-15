#include <iostream>

using namespace std;

class KarmasikS
{
	double gercel;
	double sanal;
	
	public:
		KarmasikS(double gercel = 0, double sanal = 0);
		double getGercel(){return gercel;}
		double getSanal(){return sanal;}
		KarmasikS operator+(const KarmasikS &sayi);
		KarmasikS operator-(const KarmasikS &sayi);
		KarmasikS operator%(const KarmasikS &sayi);
		void operator=(const KarmasikS &sayi);		
		friend ostream & operator<<(ostream &output, const KarmasikS &s1);
		friend istream & operator>>(istream &input, KarmasikS &s1);
};

int main()
{
	KarmasikS ks1(3.14, 8.15), ks2(21.12, 23.42);
	KarmasikS ks3;
	KarmasikS toplam = ks1 + ks2;
	KarmasikS fark = ks2 - ks1;	
	KarmasikS mod = ks2 % ks1;
	
	cout<<"Toplam: "<<toplam<<endl;
	cout<<"Fark: "<<fark<<endl;	
	cout<<"Mod: "<<mod<<endl;

	cout<<"a + bi formatinda karmasik sayi giriniz: ";	
	cin>>ks3;
	cout<<"Karmasik Sayi: "<<ks3<<endl;
	cout<<"Gercel Kisim: "<<ks3.getGercel()<<endl;
	cout<<"Sanal Kisim: "<<ks3.getSanal()<<endl;

	return 0;
}

KarmasikS::KarmasikS(double gercel, double sanal)
{
this->gercel = gercel;
	this->sanal = sanal;
}

KarmasikS KarmasikS::operator+(const KarmasikS &sayi)
{
	double yeni_gercel, yeni_sanal;

	yeni_gercel = gercel + sayi.gercel;
	yeni_sanal = sanal + sayi.sanal;

	return KarmasikS(yeni_gercel, yeni_sanal);
}

KarmasikS KarmasikS::operator-(const KarmasikS &sayi)
{
	double yeni_gercel, yeni_sanal;

	yeni_gercel = gercel - sayi.gercel;
	yeni_sanal = sanal - sayi.sanal;
	
	return KarmasikS(yeni_gercel, yeni_sanal);
}

KarmasikS KarmasikS::operator%(const KarmasikS &sayi)
{
	double yeni_gercel = 0, yeni_sanal = 0;

	return KarmasikS(yeni_gercel, yeni_sanal);
}

void KarmasikS::operator=(const KarmasikS &sayi)
{
	gercel = sayi.gercel;
	sanal = sayi.sanal;
}

ostream & operator<<(ostream &output, const KarmasikS &sayi)
{	output<<sayi.gercel<<" + "<<sayi.sanal<<"i";
	return output;
}

istream & operator>>(istream &input, KarmasikS &sayi1)
{
	input>>sayi1.gercel;
	input.ignore(3);
	input>>sayi1.sanal;
	input.ignore();
	return input;	
}
