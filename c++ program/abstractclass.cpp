#include<bits/stdc++.h>
using namespace std;
class A{
  //public:
  virtual void fun()=0;
  void fun2()
  {
    cout<<"Fun2 function called";
  }
};
class B:protected A{   //public ya protected dono use kr skte ho
  public:
  void fun()
  {
    cout<<"fun overloaded"<<endl;
  }
  int b;
};
int main()
{
  B b;
  b.fun();
  //b.fun2();
}

// Learnings : 
// A class which contain altleast one pure virtual function, called abstract class.
// A do nothing function is called pure virtual function. it is intialised with zero(=0)
// if you want to access the rest of member fubction and variables then  
// you must have to override the pure virtual function of that abstract class.