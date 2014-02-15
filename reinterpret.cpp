#include <iostream>
using namespace std;

struct person{
	char name[40];
	int reg_num;
};
void print(const person &k){
	cout << "name:" <<k.name <<endl;
};

int main() {
	person ahmet;
	strcpy(ahmet.name,"Ahmet Uzun");
	ahmet.reg_num=345;
	print(ahmet);
	return 0;
}
