//2.Write a program to swap the values of two different classes using friend function.
#include <iostream>
using namespace std;
class ABC;
class XYZ
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"Enter value of class XYZ:";
        cin>>x;
    }
    void display()
    {
        cout<<"Value 1="<<x<<endl;
    }
    friend void swap(XYZ&,ABC&);
};
class ABC
{
    private:
    int y;
    public:
    void getdata()
    {
        cout<<"Enter a value of class ABC:"<<endl;
        cin>>y;
    }
    void display()
    {
        cout<<"Value 2="<<y<<endl;
    }
    friend void swap(XYZ&,ABC&);
};
void swap(XYZ&m,ABC&n)
{
    int temp;
    temp=m.x;
    m.x=n.y;
    n.y=temp;
}
int main ()
{
    XYZ p;
    ABC q;
    p.getdata();
    q.getdata();
    cout<<"Value before swapping:"<<endl;
    p.display();
    q.display();
    swap(p,q);
    cout<<"Value after swapping:"<<endl;
    p.display();
    q.display();
    return 0;
}
