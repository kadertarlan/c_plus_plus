#include <iostream>
using namespace std;

class string{
  enum{ MAX_SIZE=10;}
  int size;
  char *contents;
 public:
  string(const char*);
  void print()const;
  ~string();
};

string::string(const char *in_data){
   size=strlen(in_data);
   if(size > MAX_SIZE){ throw " string too long..";}
   contents=new char[size+1];
   strcpy(contents,in_data);
}
int main(){

  char input[20];
  string *str;
  bool again;
  do{
    again=false;
    cout << "enter a string..:";
    cin >> input;
    try{ str=new string(input);}
    catch(const char *){
      cout << " string is too long." << endl;
      again=true;}
} while(again);

str->print();
delete str;
}
