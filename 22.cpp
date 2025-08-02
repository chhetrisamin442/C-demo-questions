//22. Write a program that prompts the user to enter their name and age. Write the entered data
//into a file named “userinfo.txt”, read details from “userinfo.txt” and display the data on
//console.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream outfile("userinfo.txt");
char name[20];
int age;
cout<<"Enter the name:";
cin>>name;
outfile<<name<<endl;
cout<<"Enter the age:";
cin>>age;
outfile<<age<<endl;
outfile.close();
ifstream infile("userinfo.txt");
infile>>name;
infile>>age;
cout<<"User name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
infile.close();
return 0;
}
