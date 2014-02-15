#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

class list{
   public:
     list *head; // listenin başına isaretçi
     list * tail; //listenın sonuna işaretçi
     list *next; //bır sonraki elemana işaretci
     int num; //depolanacak deger

     list(){  head=tail=next=NULL;}
     virtual void store(int i)=0;
     virtual int retrieve()=0;
};
//kuruk tıpı lıste olustur

class queue : public list{
  public:
    void store(int i);
    int retrieve();
};

void queue::store(int i){
   list *item;
   item=new queue;
   if(!item){  cout << " allocation error..\n"; exit(1);}
   item->num = i;
   
   //listenın sonuna koy
   if(tail){   tail->next=item;}
   tail=item;
    item->next=NULL;
    if(!head){ head=tail;}
}
int queue::retrieve(){
    int i;
    list *p;
    if(!head){ cout << "list empty..\n"; return 0;}
    //listenin başından at
    i=head->num;
    p=head;
    head=head->next;
    delete p;
    return i;
}
//yıgın tipi liste olustur

class stack : public list{
   public:
     void store(int i);
     int retrieve();
};

 void stack::store(int i){
      list *item;
      item=new stack;
      if(!item){ cout << "allocation error .\n"; exit(1);}
      item->num =i;
      //yıgın benzer işlem için listenin önüne koy
      if(head) item->next =head;
      if(!tail){  tail=head;}
    }
int stack::retrieve(){
   int i;
   list *p;

   if(!head){  cout << "list empty..\n"; return 0;}
   //listenın basından at
   i=head->num;
   p=head;
   head=head->next;
   delete p;
   return i;
}
int main(){

   list *p;
   //sıra
   queue q_ob;
   p=&q_ob; // sıraya ısaret et
   p->store(1);
   p->store(2);
   p->store(3);
   cout <<" Queue:\n";
   cout << p->retrieve();
   cout << p->retrieve();
   cout << p->retrieve();
   cout << "\n";
// sınıf
   stack s_ob;
   p=&s_ob;
   p->store(1);
   p->store(2);
   p->store(3);
   cout <<" Stack:\n";
   cout << p->retrieve();
   cout << p->retrieve();
   cout << p->retrieve();
   cout << "\n";

   }
