//10. Write a program to illustrate the concept of composition.
#include <iostream>
using namespace std;
class employee
{
    int eid;
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter id and salary"<<endl;
        cin>>eid>>salary;
    }
    void display()
    {
        cout<<"Emp ID:"<<eid<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
class Company 
{
    char cname[20];
    char department[20];
    employee e;
    public:
    void getdata()
    {
        e.getdata();
        cout<<"Enter company name and department:"<<endl;
        cin>>cname>>department;
    }
    void display()
    {
        e.display();
        cout<<"Company name="<<cname<<endl;
        cout<<"Department name="<<department<<endl;
    }
};
int main ()
{
    Company c;
    c.getdata();
    c.display();
    return 0;
}
