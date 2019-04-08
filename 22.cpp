#include<iostream>
    #include<stdlib.h>

    using namespace std;

    class MinMax
    {
        public:
        int maximumValue;
        int minimumValue;

        int i;

        public:

        //finds maximum element in the array

        void find_Max(int userArray[],int totalElements)
        {
            int *p=userArray;
            int maximumValue=0;
            for(i=0;i<totalElements;i++)
            {
                if(*p>maximumValue)
                {
                    maximumValue=*p;
                    p++;
                }
            }
            cout<<"\n\t>> Maximum Value : "<<maximumValue<<endl;
        }

        //finds minimum element in the array
        
        void find_Min(int userArray[],int totalElements)
        {
            int minimumValue=userArray[0];
            for(i=0;i<totalElements;i++)
            {
                if(userArray[i]<minimumValue)
                {
                    minimumValue=userArray[i];
                }
            }
            cout<<"\n\t>> Minimum Value : "<<minimumValue<<endl;
        }

    };

    int main()
    {
        MinMax* MM;

        int i,userArray[20];
        int totalElements;
        int userChoice;

        cout<<"\nEnter the number of elements >>>>>>>>";
        cin>>totalElements;

        cout<<"\nEnter the elements : ";
        for(i=0;i<totalElements;i++)
        {
            cout<<"\n\t";
            cin>>userArray[i];
        }

        cout<<"\n 1.Maximum element   2. Minimum element   3.Exit";
       
        

        cout<<"\n choice (1-3) >>>>>>";
        cin>>userChoice;

        switch(userChoice)
        {
            case 1:
            {
                MM = new MinMax;
                MM->find_Max(userArray,totalElements);
                delete MM;
            }break;

            case 2:
            {
                MM = new MinMax;
                MM->find_Min(userArray,totalElements);
                delete MM;
            }break;

            case 3:
            {
                exit(0);
            }

            default:
            cout<<"\n\tInvalid Choice.Enter a choice from 1-3 only.";
        }
    }
