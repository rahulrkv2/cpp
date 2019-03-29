#include<iostream>
using namespace std;
class fibonacci
{
int a=0,b=1,c;
public:
void fib(int n)
{
cout<<a<<" "<<b<<" ";
for(int i=2;i<n;i++)
{
c=a+b;
cout<<c<<" ";
a=b;
b=c;
}
}
};
int main()
{
fibonacci f;
int n;
cout<<"enter the limit:";
cin>>n;
f.fib(n);
}
