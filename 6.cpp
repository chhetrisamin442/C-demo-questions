//6. Write a program to input n numbers and find their sum using dynamic memory
allocation.
#include <iostream>
using namespace std;
int main ()
{
    int i,size,sum=0;
    int *ptr;
    cout<<"How many numbers woukd you like to enter?"<<endl;
    cin>>size;
    ptr=new int [size];
    for(i=0;i<size;i++)
    {
        cout<<"Enter number"<<i+1<<endl;
        cin>>ptr[i];
    }
    cout<<"You have entered:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
    for(i=0;i<size;i++)
    {
        sum=sum+ptr[i];
    }
    cout<<"Sum of n numbers="<<sum<<endl;
    delete[]ptr;
    return 0;
}
