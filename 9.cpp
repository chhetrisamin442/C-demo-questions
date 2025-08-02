//9. Write a program to illustrate the concept of virtual base class/multipath
//inheritance/diamond problem.
#include<iostream>
using namespace std;
class A 
{
    public:
    int a;
};
class B:virtual public A
{
    public:
    int b;
};
class C:virtual public A{
    public:
    int c;
};
class D:public B,public C{
    public:
    int d;
};
int main ()
{
    D obj;
    obj.a=10;
    obj.a=100;
    obj.b=20;
    obj.c=30;
    obj.d=40;
    cout<<"A="<<obj.a<<endl;
    cout<<"B="<<obj.b<<endl;
    cout<<"C="<<obj.c<<endl;
    cout<<"D="<<obj.d<<endl;
    return 0;
}
