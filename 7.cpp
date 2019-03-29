  #include<iostream>
    using namespace std;

    class Employee
    {
        public:
        int employeeID;
        char employeeName[20];
        float basic;
        float DA;
        float incomeTax;
        float netSalary;

        public:
        void getEmployeeDetails(int i)
        {
            cout<<"\n\t>> Employee - "<<i+1;
            cout<<"\n\tEnter details \n\temp.ID : ";
            cin>>employeeID;
            getchar();
            cout<<"\tname : ";
            cin.getline(employeeName,20);
            cout<<"\tsalary : ";
            cin>>basic;
        }

        void calculateNetSalary()
        {
            DA=0.52*basic;
           float gross= basic+DA;
            incomeTax=0.3*DA;
            netSalary=gross-incomeTax;
        }
//float basic,float DA
        void printEmployeeDetails(int i)
        {
            cout<<"\n"<<i+1;
            cout<<"\temp id: "<<employeeID;
            cout<<"\temp name : "<<employeeName;
            cout<<"\tSalary = "<<basic<<" ";
            cout<<"\n Income Tax = "<<incomeTax<<" ";
            cout<<"\tDA = "<<DA;
            cout<<"\t Net Salary = "<<netSalary<<" "<<endl;;
            cout<<"\n";
        }

    };

    int main()
    {
        Employee E[20];
        int totalEmployee;
        int i;

        cout<<"\n\t";

        cout<<"\n\n\tEnter the number of employees: ";
        cin>>totalEmployee;

        for(i=0;i<totalEmployee;i++)
        {
            E[i].getEmployeeDetails(i);
        }

        for(i=0;i<totalEmployee;i++)
        {
            E[i].calculateNetSalary();
        }

        cout<<"\n\temployee list\n";
        for(i=0;i<totalEmployee;i++)
        {
            E[i].printEmployeeDetails(i);
        }
}
