//5. Using class write a program that receives inputs principle amount, time and rate.
//Keeping rate 8% as the default argument, calculate simple interest for three
//customers
#include <iostream>
using namespace std;
class simpleinterest 
{
private:
    float principal, time, rate;
public:
    void setvalues(float p, float t, float r = 8)
     {
        principal = p;
        time = t;
        rate = r;
    }
    void calculatesi()
     {
        float si = (principal * time * rate) / 100;
        cout << "Simple Interest: " << si << endl;
    }
};
int main()
 {
    simpleinterest* c = new simpleinterest[3];
    float p, t;
    for (int i = 0; i < 3; i++)
     {
        cout << "\nDetails of customer " << i + 1 << ":" << endl;
        cout << "Enter principal and time: ";
        cin >> p >> t;
        c[i].setvalues(p, t);
        c[i].calculatesi();
    }
    delete[] c;  
    return 0;
}
