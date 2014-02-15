#include <iostream>
using namespace std;

class state{  // abstract class
  protected:
   state *const nexta, *const nextb ;
   char output;
  public:
   state(state &a, state &b): nexta(&a) , nextb(&b){}
   virtual state* transition(char)=0;  // saf sanal fonk
};

class state1: public state{
  public:
   state1(state &a, state &b): state(a,b){}
   state *transition(char);
};

class state2:public state{
   public:
   state2(state &a,state &b): state(a,b){}
   state *transition(char);
 };
class state3: public state{
 public:
  state3(state &a, state &b): state(a,b){}
  state *transition(char);
};

