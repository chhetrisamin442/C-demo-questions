//7. Write a program to illustrate the use of static member function.
#include <iostream>
using namespace std;
class test
{
private:
    int code;
    static int count;
public:
    void setcode()
    {
        code = ++count;
    }
    void showcode()
    {
        cout << "Code=" << code << endl;
    }
    static void showcount()
    {
        cout << "Count=" << count << endl;
    }
};
int test::count = 0;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode(); 
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
