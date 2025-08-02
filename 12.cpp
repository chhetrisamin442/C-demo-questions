//12. Write a complete program based on the provided figure. Note that alpha, beta and gamma
//are the class names and showa( ) ,showb( ) and showg( ) are the functions that display the
//data members of their respective classes.
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
