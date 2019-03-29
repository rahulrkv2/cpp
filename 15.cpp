#include<iostream>
using namespace std;
class Account
{
public:
char custname[100];
int accno;
void getdata()
{
cout<<"Enter name:";
cin>>custname;
cout<<"Enter account number";
cin>>accno;
}
};
class cur_acc:public Account
{
public:
int dep,bal;
float intrate=0.03;
void getdatacur()
{
cout<<"Enter deposit";
cin>>dep;
bal=dep+(intrate*dep);
}
void dispcur()
{
cout<<"Customer name:"<<custname<<endl;
cout<<"Balance:"<<bal<<endl;
}
};
class sav_acc:public Account
{
public:
int dep1,bal1;
float intrate1=0.05;
void getdatasav()
{
cout<<"Enter deposit";
cin>>dep1;
bal1=dep1+(intrate1*dep1);
}
void dispsav()
{
cout<<"Customer name:"<<custname<<endl;
cout<<"Balance:"<<bal1<<endl;
}
};
int main()
{
int i,n,ch;
sav_acc F[100];
cur_acc R[100];
cout<<"Enter number of customers:";
cin>>n;
cout<<"Enter your choice 1.Savings 2.Current:";
cin>>ch;
if (ch==1)
{
for ( i = 0; i < n; i++)
{
    		F[i].getdata();
    		F[i].getdatasav();
    		F[i].dispsav();

    		
    	}
    	}
    	else if(ch==2)
    	{
    		for ( i = 0; i < n; i++)
    	{
    		R[i].getdata();
    		R[i].getdatacur();
    		R[i].dispcur();

    		
    	}

    	}	
		
	else
		cout<<"Invalid choice!";
	return 0;
}
