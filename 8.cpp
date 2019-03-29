
    #include<iostream>
    #include <string>
    using namespace std;

    class EMPLOYEE
    {
        public:
        int EMPCODE;
        char EMPNAME[20];

        public:
        void getdata(int i)
        {
            cout<<"\nemp - "<<i+1;
            cout<<"\nenter emp code : ";
            cin>>EMPCODE;
            cout<<"\tenter emp name : ";
            //cin.get(EMPNAME,19); 
            cin>>EMPNAME;
        }

        void displaydata(int i)
        {
            
            cout<<"\n data "<<i+1;
            cout<<"code : "<<EMPCODE;
            cout<<"name : "<<EMPNAME;
            cout<<endl;
        }

    };

    int main()
    {
        EMPLOYEE E[20];
        int totalEmployee;
        int i;

        
        cout<<"\nEnter the number of emp: ";
        cin>>totalEmployee;

        for(i=0;i<totalEmployee;i++)
        {
            E[i].getdata(i);
        }

        cout<<"\n";
        for(i=0;i<totalEmployee;i++)
        {
            E[i].displaydata(i);
        }

}
