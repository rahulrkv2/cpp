
#include<iostream>
#include<cmath>
using namespace std;
class equation
{
float r1,r2;
int a,b,c;
public:
void findroot(int a,int b,int c)
{
int d;
d=(b*b)-(4*a*c);
if(d>0)
{
cout<<"roots are real and distinct\n";
r1=((-b)+sqrt((b*b)-(4*a*c))/(2*a));
r2=((-b)-sqrt((b*b)-(4*a*c))/(2*a));
cout<<"\nroot1="<<r1;
cout<<"\nroot2="<<r2;
}
if(d==0)
{
cout<<"roots are real and same\n";
r1=((-b)+sqrt((b*b)-(4*a*c))/(2*a));
cout<<"root1=\n"<<r1;
}
if(d<0)
cout<<"roots are imaginary";
}
};
int main()
{
equation e;
int x,y,z;
cout<<"Enter the coefficients:";
cin>>x>>y>>z;
e.findroot(x,y,z);
} 
