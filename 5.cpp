#include <iostream>
using namespace std;
class prime
{
int i,flag;
public:
int primeno(int low,int high)
{
while (low < high)
{
flag = 0;
for(i=2;i<=low/2;++i)
{
if(low % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
cout << low << " ";
++low;
}
return 0;
}};
int main()
{
prime p;
int low, high, i, flag;
cout << "Enter two numbers(intervals): ";
cin>> low>> high;
p.primeno(low,high);
}
