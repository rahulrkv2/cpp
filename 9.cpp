 #include<iostream>
    #include <algorithm>
    using namespace std;

    class stud
    {
        public:
        int usn;
        char Name[20];
        int mark[3];
       // float m2;
        //float m3;
        float mavg;

        public:
        void getEmployeeDetails(int i)
        {
            cout<<"student "<<i+1;
            cout<<"\nEnter details\nusn : ";
            cin>>usn;
            getchar();
            cout<<"\tname : ";
            cin.getline(Name,20);
            cout<<"\tmark1 : ";
            cin>>mark[0];
             cout<<"\tmark2 : ";
            cin>>mark[1];
             cout<<"\tmark3 : ";
             cin>>mark[2];
             static const int size = 3;
              sort(mark, mark+size);
            mavg=(mark[1]+mark[2])*0.5;

        }

        /*void calculateNetSalary()
        {
            DA=0.52*basic;
            incomeTax=0.3*DA;
            netSalary=DA+incomeTax;
        }*/
//float basic,float DA
        void printDetails(int i)
        {
            cout<<"\n"<<i+1;
            cout<<"\tusn: "<<usn;
            cout<<"\tname : "<<Name;
            
            cout<<"\tavg marks  = "<<mavg;
            
            cout<<"\n";
        }

    };

    int main()
    {
        stud E[20];
        int totalEmployee;
        int i;

        cout<<"\n";

        cout<<"\nEnter the number of students: ";
        cin>>totalEmployee;

        for(i=0;i<totalEmployee;i++)
        {
            E[i].getEmployeeDetails(i);
        }


        cout<<"\n\tstud list\n";
        for(i=0;i<totalEmployee;i++)
        {
            E[i].printDetails(i);
        }
}
