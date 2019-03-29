#include<iostream>
#include<stdlib.h>

using namespace std;

class Bank
{
    public:
    int count;    
   


    Bank(){count = 0;} 

 
    Bank operator ++()
    {   
        count=count+1;
    }

    Bank operator --()
    {
        count=count-1;
    }


    void print() { cout <<count << " people in the bank" << endl; } 
};

int main()
{
    int customerChoice;
    int currentCount=0;
    Bank b1;
    b1.count=0;

    do
    {
        
        cout<<"\nadd person:0    remove person:1      EXIT:2";
        
        cout<<"\nEnter your choice : ";
        cin>>customerChoice;

        if(customerChoice==0)
        {
            ++b1;

            b1.print();
            //cout<<"\n\t>> No. of people in the Bank = "<<currentCount;
        }
        else if(customerChoice==1)
        {
            --b1;

            b1.print();
            //cout<<"\n\t>> No.of people in the Bank = "<<currentCount;
 
        }
        else
        {
            exit(EXIT_SUCCESS);
        }
        
            
    } while (customerChoice!=3);
    
  
}
