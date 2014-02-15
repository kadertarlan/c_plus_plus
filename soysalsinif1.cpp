#include <iostream>
using namespace std;
#define SIZE 10
//soysal yıgın sınıfı ac

template <class StackType> class stack{
    StackType stck[SIZE];  //stack tutcak
    int tos; //stackın en ust kısmının ındexı
  public:
    void init(){ tos=0;} //stack hazırlama
    void push(StackType ch); //nesneyı stacke ata
    StackType pop(); //yıgından nesne cek
};
//bır nesne koy
template <class StackType>
void stack<StackType>:: push(StackType ob){
   if(tos==SIZE){ cout << "stack is full\n" ;  return;}
   stck[tos]=ob;
   tos++;
}
//nesneyı cagırma
template <class StackType>
StackType stack<StackType>::pop(){
   if(tos==0){
     cout << "stack is empty\n"; return 0;}
   tos--;
   return stck[tos];
}

int main(){
   stack<char> s1,s2; // iki yıgın olustur
   int i;
//yıgını hazırlama
   s1.init();
   s2.init();
    
   s1.push('a');
   s2.push('x');
   s1.push('b');
   s2.push('y');
   s1.push('c');
   s2.push('z');

for(i=0; i<3; i++)  
   cout << " pop s1 : " << s1.pop() << endl;
for(i=0;i<3; i++)
   cout << "pop s2 : " << s2.pop() << endl;
//cıft yıgınları gösterme işlemi
 stack<double> d1,d2; // iki yıgın olusturur
//yıgınları ayarlama
   d1.init();
   d2.init();

   d1.push(1.1);
   d2.push(2.2);
   d1.push(3.3);
   d2.push(4.4);
   d1.push(5.5);
   d2.push(6.6);

for(i=0; i<3; i++)
   cout << "pop d1 : " << d1.pop() << endl;
for(i=0; i<3; i++)
   cout << " pop d2 : " << d2.pop() << endl;
}













