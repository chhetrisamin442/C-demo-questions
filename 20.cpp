//20. Create a function template to find sum and product of two integers and two float values.
#include <iostream>
using namespace std;
template <class T>
void sum(T x, T y) 
{
    T s;
     s = x + y;
    cout << "Sum = " << s << endl;
}
template <class T>
void product(T x, T y) 
{
    T p;
    p = x * y;
    cout << "Product = " << p << endl;
}
int main()
 {
    int i1, i2;
    float f1, f2;
    cout << "Enter two integer values: ";
    cin >> i1 >> i2;
    sum(i1, i2);        
    product(i1, i2);       
    cout << "Enter two float values: ";
    cin >> f1 >> f2;
    sum(f1, f2);           
    product(f1, f2);       
    return 0;
}
