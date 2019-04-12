#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
int rollNo;
int marks1,marks2,marks3;
void getStudentDetails()
{	

cout<<"\nEnter Roll No : ";
cin>>rollNo;
cout<<"\nEnter MARKS";
cin>>marks1;
cin>>marks2;
cin>>marks3;
}

void displayStudentDetails()
{
cout<<"\nRoll No : "<<rollNo;
cout<<"\nMarks "<<marks1;
cout<<"\t"<<marks2;
cout<<"\t"<<marks3;
}
};

int main()
{
Student S;
int i;
int userChoice;
char secondChoice='y';
do
{
cout<<"\n1.Write student details\n";
cout<<"2.Read student details";
cin>>userChoice;
switch(userChoice)
{
case 1:
{
ofstream writeObject;					writeObject.open("student.txt");
{
S.getStudentDetails();
writeObject.write((char *)&S,sizeof(S));
}
writeObject.close();
}break;
case 2:
{
ifstream readObject;
readObject.open("student.txt");
S.displayStudentDetails();
readObject.read((char *)&S,sizeof(S));
readObject.close();
}break;
}
cout<<"\n>>CONTINUE ? (y/n) : ";
cin>>secondChoice;

}while(secondChoice=='y');
}
