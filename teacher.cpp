#include <iostream>
#include <string>
using namespace std;

class teacher{
  protected:
    string name;
    int age=0, num_of_student;
  public:
    void setname(const string & new_name){ name=new_name;}
    void print() const;
};
void teacher::print() const{
   cout << "name: " << name << "   age : " << age<< endl;
   cout << "number of student:" << num_of_student << endl;
}

class principal : public teacher{
   string school_name;
   int num_of_teacher;
 public:
   void setschool(const string & s_name){ school_name=s_name;}
   void print() const;
};
/*void principal ::print() const{
   cout << "name: " << name << "   age : " << age<< endl;
   cout << "number of student:" << num_of_student << endl;
   cout << "name of school:" << school_name << endl;
}  */
// principal sınıfının print() fonk teacher sınfıının print fonk üzerine yazılır(override)
// sımdı principal sınıfının iki tane print fonk var 

// bu fonk söylede yazılabilirdi
void principal ::print() const{
   teacher::print();
   cout << "name of school:" << school_name << endl;
}

int main(){
   teacher t1;
   principal p1;

   p1.setname(" principal 1");
   t1.setname("teacher 1");
   p1.setschool("elementry school");
   
   t1.print();
   p1.print();

}



