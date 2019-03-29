#include<iostream>
using namespace std;
class Student
{
	int rno;
public:
	void input1()
	{
		cout<<"Enter roll no:";
		cin>>rno;
	}
	
	
};
class Test: public Student
{
	//int m1,m2;
public:
	int m1,m2;
	void input2()
	{
		cout<<"Enter mark 1:";
		cin>>m1;
		cout<<"Enter mark 2:";
		cin>>m2;
	}


};
class Sport
{
	
public:
	int sm;
	void input3()
	{
      cout<<"Enter sports marks";
      cin>>sm;
	}
	
	
	
};
class Result:public Test,public Sport
{
	//int total;
public:
	int total;
	void disp()
	{
		total=m1+m2+sm;
		cout<<"Total marks="<<total<<endl;
	}
	
};
int main()
{
	int i ,n;
	Result R[100];
	cout<<"Enter no of students";
	cin>>n;
	for ( i = 0; i < n; i++)

	{
		R[i].input1();
		R[i].input2();
		R[i].input3();
		R[i].disp();

	
	}

	return 0;
}
