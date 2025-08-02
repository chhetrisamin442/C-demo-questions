//23. Write a C++ program to illustrate reading and writing into multiple files.
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
