#include<bits/stdc++.h>
using namespace std;
class A{
  public:
  int a;
};
class B:virtual public A{
  public:
  int b;
};
class C:virtual public A
{
  public:
  int c;
};
class D:public B,public C{
  public:
  int d;
};

int main()
{
  D d;
  d.a=5;// uper me dono class virtual inherit krna hoga tb yeh run krega
  d.b=10;
  d.c=20;
  d.d=30;
  cout<<d.a<<endl;
  cout<<d.b<<endl;
  cout<<d.c<<endl;
  cout<<d.d<<endl;
  return 0;
}