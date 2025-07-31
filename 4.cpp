//4. Write a program to illustrate the concept of dynamic constructor.
#include <iostream>
using namespace std;
class complex{
    int *real,*imag;
    public:
    complex()
    {
        real= new int;
        imag= new int;
        *real=0;
        *imag=0;
    }
    complex(int r,int i)
    {
        real=new int;
        *real=r;
        imag=new int;
        *imag=i;
    }
    void display()
    {
        cout<<*real<<"+"<<*imag<<"i"<<endl;
    }
    void add(complex c1,complex c2)
    {
        *real=*c1.real+*c2.real;
        *imag=*c2.imag+*c2.imag;
    }
    ~complex()
    {
        delete real;
        delete imag;
    }
};
int main ()
{
    complex c1(5,4);
    complex c2(4,5);
    complex c3;
    cout<<"First complex number="<<endl;
    c1.display();
    cout<<"Second complex number="<<endl;
    c2.display();
    cout<<"Sum="<<endl;
    c3.add(c1,c2);
    c3.display();
    return 0;
}
