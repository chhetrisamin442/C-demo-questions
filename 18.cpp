//18. Write a program that illustrates the concept of exception handling.
#include <iostream>
using namespace std;
int main ()
{
    int a,b,x;
    cout<<"Enter values of a and b:"<<endl;
    cin>>a>>b;
    x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result(a/x)="<<a/x<<endl;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught: DIVIDE BY ZERO"<<endl;
    }
    cout<<"END";
    return 0;
}
