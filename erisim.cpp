#include <iostream>
#include <string>
using namespace std;

class teacher{ 
  private:
     string name;
  protected:
    int age, num_of_student;
  public:
    void setname(const string & new_name){ name=new_name;}
    void print() const;
};
class principal : public teacher{
  private:
    string school_name;
    int num_of_teacher;
  public:
   void setschool(const string & s_name){ school_name=s_name;}
   void print() const;
   int getage() const { return age;}
   const string & get_name(){ return name;}
};

int main(){
   teacher t1;
   principal p1;
  //t1.num_of_student=100; // error because protected
   t1.setname("kadertarlan"); // ok publıc
   p1.setschool("bal");  //ok publıc
}
