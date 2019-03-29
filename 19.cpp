#include<iostream>
using namespace  std;
class Side
{
	protected:
		int s;
	public:

		void accept()
		{
			cout<<"Enter side >>>>>";
			cin>>s;
		}
};
class Square: public Side
{
public:
	void calc()
	{
		cout<<s*s;
	}
};
class Cube: public Side
{
public:
	void calc()
	{
		cout<<s*s*s;
	}
};
int main()
{
	int ch;
  int z=1;

	while(z){
	cout<<">>>>>>>> Square or Cube of the number >>>>>>>> (0/1) ";
	cin>>ch;
	if(ch==0)
	{
		Square s;
		s.accept();
		s.calc();

	}
	if(ch==1)
	{
		Cube c;
		c.accept();
		c.calc();
	}
   
   cout<<"do you want to continue          1/0";
   cin>>z;
     }
	return 0;
}