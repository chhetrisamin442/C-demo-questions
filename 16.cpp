//16. Write a complete program to convert the rectangular coordinates into polar coordinates
//using suitable type conversion method.
#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
private:
float radius;
float angle;
public:
Polar()
{
radius=0.0;
angle=0.0;
}
Polar(float r,float a)
{
radius=r;
angle=a;
}
void display()
{
cout<<"("<<radius<<","<<angle<<")"<<endl;
}
};
class Rectangle
{
private:
float xco;
float yco;
public:
Rectangle()
{
xco=0.0;
yco=0.0;
}
Rectangle(float x,float y)
{
xco=x;
yco=y;
}
void display()
{
cout<<"("<<xco<<","<<yco<<")"<<endl;
}
operator Polar ()
{
float a=atan(yco/xco);
float r=sqrt(xco*xco+yco*yco);
return Polar(r,a);
}
};
int main ()
{
Rectangle r(7.07107,7.07107);
Polar p;
p=r;
cout<<"Rectangular coordinates=";
r.display();
cout<<"Polar coordinates=";
p.display();
return 0;
}
