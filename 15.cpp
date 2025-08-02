//15. Write a complete program to convert the polar coordinates into rectangular coordinates
//using suitable type conversion method.
#include <iostream>
#include<math.h>
using namespace std;
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
};
class Polar
{
private:
public:
float radius;
float angle;
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
operator Rectangle()
{
float x=radius*cos(angle);
float y=radius*sin(angle);
return Rectangle(x,y);
}
};
int main()
{
Polar p(10.0,0.758539);
Rectangle r;
r=p;
cout<<"Polar coordinates=";
p.display();
cout<<"Rectangular coordinates=";
r.display();
return 0;
}
