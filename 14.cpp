//14. Write a program to overload unary minus(-) operator.
#include<iostream>
using namespace std;
class space
{
private:
int x,y,z;
public:
void getdata(int a, int b,int c);
void display();
friend void operator -(space &s);
};
void space::getdata (int a,int b,int c)
{
x=a;
y=b;
z=c;
}
void space::display()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
cout<<"z="<<z<<endl;
}
void operator -(space &s)
{
s.x=-s.x;
s.y=-s.y;
s.z=-s.z;
}
int main ()
{
space s;
s.getdata(5,10,15);
cout<<"s:"<<endl;
s.display();
-s;
cout<<"-s:"<<endl;
s.display();
return 0;
}
