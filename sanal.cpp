//hatalı kod
#include <iostream>
#include <cstring>
using namespace std;

class teacher{
public:
   string *name;
   int num_of_student;
   teacher(string *name1, int num){ strcopy(name,name1); num_of_student=num;}
   virtual void print(){ cout << name << "  " << num_of_student;}
   void show1(teacher &tp){
      tp.print();}
};
 
class principal: public teacher{
   string *school_name;
 public:
   principal(string *name2, int num, string *name1){ strcopy(school_name,name2); num_of_student=num; strcopy(name,name1);}
   void print(){ cout << name << "" << num_of_student << " " << school_name;}
   void show(principal &pp){
     pp.print();}

int main(){
  teacher t1("teacher",50);
  principal p1("peincipal",45,"school1");
  t1.show1();
  p1.show();
}

  
   

