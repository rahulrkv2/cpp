#include<iostream>
using namespace std;
class Shape
{
public:
int l,b,h;
void getdata()
{
cout<<"Enter length:";
cin>>l;
cout<<"Enter breadth:";
cin>>b;
cout<<"Enter height:";
cin>>h;
}
};
class Rectangle:public Shape
{
public:
int area1;
void disp1()
{
area1=l*b*h;
cout<<"Area of rectangle is:"<<area1<<endl;
}
};
class Triangle:public Shape
{
public:
float area2;
void disp2()
{
area2=0.5*b*h;
cout<<"Area of triangle is:"<<area2<<endl;
}
};
int main()
{
Triangle T;
Rectangle R;
R.getdata();
T.b=R.b;
T.h=R.h;
R.disp1();
T.disp2();
return 0;
}
