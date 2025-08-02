//21. Create a function template to swap two integers, two floating point data and two characters.
#include <iostream>
using namespace std;
template <class T>
void swapValues(T& x, T& y) 
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
 {
    float f1 = 10.20038f, f2 = 34.222f;
    char c1 = 'd', c2 = 'r';
    cout << "Before swapping:" << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    swapValues(f1, f2);
    swapValues(c1, c2);
    cout << "After swapping:" << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    return 0;
}
