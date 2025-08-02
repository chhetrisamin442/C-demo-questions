//12.The Books class derives information from both the Student and Teacher classes, which in turn
//derive information from the College class. Define all four classes with at least one parameterized
//constructor and a void display() method in each class. In the main() function, create an object of
//the Books class, initialize all data members, and display them.
#include <iostream>
using namespace std;
class alpha
{
    private:
    int a,b;
    public:
    alpha(int x,int y)
    {
        a=x;
        b=y;
    }
    void showa()
    {
        cout<<"Value of a="<<a<<endl;
        cout<<"Value of b="<<b<<endl;
    }
};
class beta
{
    private:
    int c;
    public :
    beta(int z)
    {
        c=z;
    }
    void showb()
    {
        cout<<"Value of c="<<c<<endl;
    }
};
class gamma:public alpha,public beta
{
    private:
    int d,e;
    public:
    gamma(int x,int y,int z,int m,int n):alpha(x,y),beta(z)
    {
        d=m;
        e=n;
    }
    void showg()
    {
        cout<<"Value of d="<<d<<endl;
        cout<<"Value of e="<<d<<endl;
    }
};
int main()
{
    gamma g1(5,6,7,8,7);
    g1.showa();
    g1.showb();
    g1.showg();
    return 0;
}
