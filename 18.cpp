#include<iostream>
using namespace std;


class emp
{
    public:
    char name[20];
    int sal;
    int exp;

    void getdata_e()
	{
		cout<<"\n   Enter name          :";
		//cin.getline(name,20);
		cin>>name;
		cout<<"\n   Enter sal           :";
		cin>>sal;
          

		cout<<"\n   Enter experience    :";
		cin>>exp;  	

	}
};

class dept:public emp
{
   public:
  // char dname[20];
   int d_id;

   void getdata_d()
	{
		cout<<"\n Enter dept id    :";
		cin>>d_id;
	}

};

class senior:public dept
{
    public:

   void disp()
    {
	if(exp>10)
	{
		cout<<"\n name      "<<name;
		
		cout<<"\n sal       "<<sal;
		cout<<"\n exp       "<<exp;
		cout<<"\n dept id   "<<d_id;
		cout<<"\n\n\n";

     }
    }

};




int main(){


senior s[12];
int n;



cout<<"ENTER 	no of emp";
cin>>n;


for (int i = 0; i < n; ++i)
{
	s[i].getdata_e();
	//s[i].getdata_d();
}


for (int i1 = 0; i1 < n; ++i1)
{
	s[i1].getdata_d();
}

for (int j = 0; j < n; ++j)
{  s[j].disp();
}


return 0;

}