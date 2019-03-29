#include<iostream>
#include<stdlib.h>

using namespace std;

class bill
{
    public:
    int unit;    
    int amt;
    char name[20];

    bill(){unit = 0; amt=0;} 


    void getDetails(int i)
        {
            
            cout<<"\nEnter details  ";
            
            cout<<"\nname : ";
            cin>>name;
            cout<<"\nEnter no of units  : ";
            cin>>unit;
            

        }
 
 
    void cal_bill(int i){
     if(unit <= 100)
        amt=unit*0.60;
    else if(unit >100 && unit <301)
        amt=unit*0.80;
    else if(unit>300)
        amt=unit*0.90;
    
   
    
    amt=amt+50;   

    if(amt>3000)
        amt=(amt*1.15);

    }



    void print(int k) { cout<<name<<"   ";
     cout<<unit << " units    Rs." <<amt<< endl; } 
};

int main()
{
   bill b[10];

        cout<<"enter no of details";
        int n1;
        cin>>n1;

    for (int i = 0; i < n1; ++i)
    {
       b[i].getDetails(i);
    }
         
for (int j = 0; j < n1; ++j)
{
    b[j].cal_bill(j);
         b[j].print(j);

}
         

}
