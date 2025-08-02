//24. Create a class named Employee with data members: emp_id, name, position and salary.
//Now, input the records of n employees and store them in a file named “employee.dat”.
//After writing the data to the file, read the records from the file and display the
//information of those employees whose salary is greater than 25,000.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
fout.open("country");
fout<<"USA"<<endl;
fout<<"Japan"<<endl;
fout<<"Nepal"<<endl;
fout.close();
fout.open("capital");
fout<<"Washington"<<endl;
fout<<"Tokyo"<<endl;
fout<<"Kathmandu"<<endl;
fout.close();
char line[50];
ifstream fin;
fin.open("country");
cout<<"contents of country file"<<endl;
while(fin)
{
fin.getline(line,50);
cout<<line<<endl;
}
fin.close();
fin.open("capital");
cout<<"contents of capital file"<<endl;
while(fin)
{
fin.getline(line,50);
cout<<line<<endl;
}
fin.close();
return 0;
}
