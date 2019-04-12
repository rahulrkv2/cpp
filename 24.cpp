#include<iostream>
using namespace std;

class Polygon
{
 public:

 virtual void calcarea(int d1, int d2)
 {
  cout<<"Area of polygons\n";
}
};
class Rectangle: public Polygon
{
 float area1;
 public:
 void calcarea(int d1, int d2)
 {
  area1=d1*d2;
  cout<<"Area of rectangle:"<<area1;
 }
};
class Triangle: public Polygon
{
 float area2;
 public:
 void calcarea(int d1, int d2)
 {
   area2=0.5*d1*d2;
   cout<<"\nArea of Triangle:"<<area2;
 }
};
int main()
{
Rectangle R;
Triangle T;
int ch,d1,d2;
Polygon *p;
cout<<"Enter sides:";
cin>>d1;
cin>>d2;
p=&R;
p->calcarea(d1,d2);
p=&T;
p->calcarea(d1,d2);

}
