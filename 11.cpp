//11.The Books class derives information from both the Student and Teacher classes, which in turn
//derive information from the College class. Define all four classes with at least one parameterized
//constructor and a void display() method in each class. In the main() function, create an object of
//the Books class, initialize all data members, and display them.
#include <iostream>
#include <cstring>
using namespace std;
class College 
{
private:
    char name[20], location[20];
public:
    College(char n[], char l[]) 
    {
        strcpy(name, n);
        strcpy(location, l);
    }
    void display()
     {
        cout << "College Name = " << name << endl;
        cout << "Location = " << location << endl;
    }
};
class Student : virtual public College 
{
protected:
    char sname[20];
    int roll;
public:
    Student(char n[], char l[], char s[], int r) : College(n, l) {
        strcpy(sname, s);
        roll = r;
    }
    void display() 
    {
        cout << "Student Name = " << sname << endl;
        cout << "Roll Number = " << roll << endl;
    }
};

class Teacher : virtual public College
 {
protected:
    char tname[20];
    int code;
public:
    Teacher(char n[], char l[], char t[], int c) : College(n, l) {
        strcpy(tname, t);
        code = c;
    }
    void display() 
    {
        cout << "Teacher Name = " << tname << endl;
        cout << "Code = " << code << endl;
    }
};
class Books : public Student, public Teacher 
{
private:
    char bname[20], wname[20];
    int cod;
public:
    Books(char n[], char l[], char s[], int r, char t[], int c, char b[], char w[], int co)
        : College(n, l), Student(n, l, s, r), Teacher(n, l, t, c) 
        {
        strcpy(bname, b);
        strcpy(wname, w);
        cod = co;
    }

    void display() 
    {
        cout << "Book Name = " << bname << endl;
        cout << "Writer Name = " << wname << endl;
        cout << "Book Code = " << cod << endl;
    }
};
int main() 
{
    char name[20] = "ABC College";
    char location[20] = "CityX";
    char sname[20] = "Alice";
    int roll = 101;
    char tname[20] = "Dr. Smith";
    int code = 2001;
    char bname[20];
    char wname[20];
    int cod;
    cout << "Enter book name: ";
    cin >> bname;
    cout << "Enter writer name: ";
    cin >> wname;
    cout << "Enter book code: ";
    cin >> cod;
    Books b1(name, location, sname, roll, tname, code, bname, wname, cod);
    b1.College::display();
    b1.Student::display();
    b1.Teacher::display();
    b1.display();
    return 0;
}
