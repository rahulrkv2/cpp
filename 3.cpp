#include<iostream>
using namespace std;

class Rev
{
public:
void reverse(int num)
{
int r=0,temp,rev;
temp=num;
while(num!=0)
{
rev=num%10;
r=(r*10)+rev;
num=num/10;
}
cout<<r;          
if(r==temp)
{
cout<<"\nPalindrome";
}
else
{
cout<<"\nNot a palindrome";
}
}
};
int main()
{
int b;
Rev r1;
cout<<"\nEnter a number:";
cin>>b; 
r1.reverse(b);
return 0;
}
