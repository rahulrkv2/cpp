#include<iostream>
using namespace std;
    class Swap
    {
        public:
        int temp;
        int a,secondNumber;

        public:

        //Call by value

        void swap_value(int a,int secondNumber)
        {
            temp=a;
            a=secondNumber;
            secondNumber=temp;   

            cout<<"\n After Swapping\n";
            cout<<"\n First Number = " <<a;
            cout<<"\n Second Number = "<<secondNumber;
            cout<<endl;
        }

        //Call by reference

        void swap_reference(int &a,int &secondNumber)
        {
            temp=a;
            a=secondNumber;
            secondNumber=temp;   

            cout<<"\n After Swapping\n";
            cout<<"\n First Number = " <<a;
            cout<<"\n Second Number = "<<secondNumber;
            cout<<endl;
        }

        //Call by address

        void swap_address(int *a,int *secondNumber)
        {
            temp=*a;
            *a=*secondNumber;
            *secondNumber=temp;   

            cout<<"\n After Swapping\n";
            cout<<"\n First Number = " <<*a;
            cout<<"\n Second Number = "<<*secondNumber;
            cout<<endl;
        }

        //Display numbers before swapping

        void displayBeforeSwap(int a,int secondNumber)
        {
            cout<<"\n Before Swapping\n";
            cout<<"\n First Number = "<<a;
            cout<<"\n Second Number = "<<secondNumber;
            cout<<endl;
        }

    };

    int main()
    {
        Swap s;

        int userChoice;
        int a,secondNumber;

        cout<<"\nfirst number :";
        cin>>a;

        cout<<"\nsecond number :";
        cin>>secondNumber;

        cout<<"\n\t--- SWAP BY ---";
        cout<<"\n\t1.Call by value  2.Call by reference 3.Call by address";
        
        
        cout<<"\n 4.Exit";

        cout<<"\nchoice (1-4) : ";
        cin>>userChoice;

        switch(userChoice)
        {
            case 1:
            {
                s.displayBeforeSwap(a,secondNumber);
                s.swap_value(a,secondNumber);
            }break;

            case 2:
            {
                s.displayBeforeSwap(a,secondNumber);
                s.swap_reference(a,secondNumber);
            }break;

            case 3:
            {
               s.displayBeforeSwap(a,secondNumber);
               s.swap_address(&a,&secondNumber);
            }break;

            case 4:
            {
                exit(0);
            }

            default:
            cout<<"\nInvalid Choice!";
        }
    }
