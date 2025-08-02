//17. Write a program to read height of person in meter and convert into feet and inches using
//suitable type conversion method. [Hint: 1 feet=12 inches and 1 meter =3.28084 feet]
#include <iostream>
using namespace std;
class Height
{
    private:
    int feet;
    float inches;
    public:
    Height()
    {
    }
    Height(float m)
    {
        float f=3.28083*m;
        feet=int(f);
        inches=12*(f-feet);
    }
    void display()
    {
        cout<<feet<<"Feet and"<<inches<<"inches"<<endl;
    }
};
int main ()
{
    float meter;
    Height  h1;
    cout<<"Enter height of person in meter"<<endl;
    cin>>meter;
    h1=meter;
    cout<<"Height of person in feet and inches"<<endl;
    h1.display();
    return 0;
}
