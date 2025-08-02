//8. Create a class time with data members hours, minutes and seconds. Now perform the
//addition of two times object by passing object as an function arguments. Use constructor
//to initialize the object of time class.
#include <iostream>
using namespace std;
class Time 
{
private:
    int hours, minutes, seconds;
public:
    void gettime(int h, int m, int s) 
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() 
    {
        cout << hours << " Hours, ";
        cout << minutes << " Minutes, ";
        cout << seconds << " Seconds" << endl;
    }
    void sum(Time t1, Time t2) 
    {
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60;
        seconds = seconds % 60;
        minutes=t1.minutes + t2.minutes;
        hours =minutes / 60;
        minutes = minutes % 60;
        hours=t1.hours + t2.hours;
    }
};
int main() 
{
    Time t1, t2, t3;
    t1.gettime(2, 45, 34);
    t2.gettime(2, 45, 34);
    t3.sum(t1, t2);
    cout << "First time: ";
    t1.display();
    cout << "Second time: ";
    t2.display();
    cout << "Sum = ";
    t3.display();
    return 0;
}
