//24. Create a class named Employee with data members: emp_id, name, position and salary.
//Now, input the records of n employees and store them in a file named “employee.dat”.
//After writing the data to the file, read the records from the file and display the
//information of those employees whose salary is greater than 25,000.
#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
private:
 int emp_id;
 char name[50];
 char position[30];
 float salary;
public:
 void input()
{
 cout<<"Enter employee ID"<<endl;
 cin>>emp_id;
 cout<<"Enter name"<<endl;
 cin>>name;
 cout<<"Enter position"<<endl;
 cin>>position;
 cout<<"Enter salary"<<endl;
 cin>>salary;
 }
 void display()
 {
 if(salary>25000)
 {
 cout<<"Employee ID:"<<emp_id<<endl;
 cout<<"Name:"<<name<<endl;
 cout<<"Position:"<<position<<endl;
 cout<<"Salary:"<<salary<<endl;
 }
}
};
int main()
{
 Employee e[100];
 int n;
 cout << "Enter the number of employees"<<endl;
 cin>>n;
 fstream file;
 file.open("employee.dat",ios::in|ios::out|ios::binary);
 cout<<"Enter details for"<<n<<"employees:"<<endl;
 for (int i=0;i<n;i++)
 {
 e[i].input();
 file.write((char*)&e[i],sizeof(e[i]));
 }
 file.seekg(0);
cout<<"Details of employees with salary greater than 25,000 are:"<<endl;
 for(int i=0;i<n;i++)
 {
 file.read((char*)&e[i], sizeof(e[i]));
 e[i].display();
 }
 file.close();
 return 0;
}
