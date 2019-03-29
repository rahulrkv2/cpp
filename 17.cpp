
#include<iostream>
#include<cmath>
#include<stdlib.h>

using namespace std;

class Shape
{
    public:
    float area;
    float sum;

    public:
    void calculateArea(int a,int b)
    {
        area=(a*b)/2;
        cout<<"\n\t>> Area = "<<area<<endl;;
    }

    void calculateArea(int a)
    {
        area=(sqrt(3)/4)*a*a;
        cout<<"\n\t>> Area = "<<area<<endl;
        
    }

    void calculateArea(int a,int b,int c)
    {
        sum=a+b+c/2;
        area=sqrt(sum*(sum-a)*(sum-b)*(sum-c));
        cout<<"\n\t>> Area = "<<area<<endl;;

    }
};

int main()
{
    Shape object;

    float a,b,c;
    int userChoice;

   
    cout<<"\n Right             0 ";
    cout<<"\n Equilateral       1 ";
    cout<<"\n Scalene           2 ";
    cout<<"\n     Exit          ";

    cout<<"\n\n\tEnter your choice :";
    cin>>userChoice;

    switch(userChoice)
    {
        case 0:
        {
            cout<<"\n Right Angled \n";
            cout<<"\nEnter 'a' value = ";
            cin>>a;
            cout<<"    Enter 'b' value = ";
            cin>>b;
            object.calculateArea(a,b);
            break;
        }

        case 1:
        {
            cout<<"\n Equilateral Triangle";
            cout<<"\n Enter side value = ";
            cin>>a;
            object.calculateArea(a);
            break;
        }

        case 2:
        {
            cout<<"\n Scalene Triangle";
            cout<<"\n Enter the value of 'a' = ";
            cin>>a;
            cout<<"\t Enter the value of 'b' = ";
            cin>>b;
            cout<<"\t Enter the value of 'c' = ";
            cin>>c;
            object.calculateArea(a,b,c);
            break;
        }

        case 3:
        {
            exit(0);
        }

        default:
        cout<<"\n\tInvalid Choice ! Enter a choice from 1-4 only.";
    }
    
}