#include<iostream>
using namespace std;

class OE
{
public:

void check(int n)
{
if(n%2==0)
{
cout<<"EVEN\n";
}
else
{
cout<<"ODD\n";
}
}
};
int main()
{
int n;
OE c;
cout<<"enter a number";
cin>>n;
c.check(n);

}



