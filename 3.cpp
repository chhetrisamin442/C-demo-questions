//3. Write a program to find sum of two complex number using friend class.
#include <iostream>
using namespace std;
class Complex2;
class Complex1 
{
private:
    int real1, imag1;
public:
    void getdata() 
    {
        cout << "Enter real and imaginary parts of Complex1: ";
        cin >> real1 >> imag1;
    }
    void display() 
    {
        cout << real1 << "+" << imag1 << "i" << endl;
    }
    friend class Complex2;
};
class Complex2
 {
private:
    int real2, imag2;
public:
    void getdata() 
    {
        cout << "Enter real and imaginary parts of Complex2: ";
        cin >> real2 >> imag2;
    }
    void display() 
    {
        cout << real2 << "+" << imag2 << "i" << endl;
    }
    void add(Complex1 c1) 
    {
        int real = c1.real1 + real2;
        int imag = c1.imag1 + imag2;
        cout << "Sum = " << real << "+" << imag << "i" << endl;
    }
};
int main()
 {
    Complex1 p;
    Complex2 q;
    p.getdata();
    q.getdata();
    q.add(p);
    p.display();
    q.display();
    return 0;
}
