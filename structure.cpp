#include<iostream>
#include <fstream>

using namespace std;


struct Student{
	int roll;
	char name[30];
	float marks;
	char grade;
};

void display(Student s)
{
	cout<<s.roll;
	cout<<s.name;
	cout<<s.marks;
	cout<<s.grade;		
}

int main()
{
	Student s;
	cout<<"Enter Roll";
	cin>>s.roll;
	cout<<"Enter Name";
	cin.getline(s.name, 30, '.');
	cout<<"Enter Marks";
	cin>>s.marks;
	cout<<"Enter Grade";
	cin>>s.grade;
	
	display(s);	
}
