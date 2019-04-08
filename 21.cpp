#include<iostream>
    using namespace std;

    //class Employee

    class Employee
    {
        public:
        int employeeId;
        char employeeName[20];
        int age;
        float basicPay;
        char designation[20];
        float employeeExperience;

        public:

        void getEmployeeDetails()
        {
            cout<<"\n Enter Employee ID : >>>";
            cin>>employeeId;
            cout<<"\n employee name : >>>";
            cin>>employeeName;
            cout<<"\n Enter age : >>>";
            cin>>age;
            cout<<"\n Enter designation : >>>";
            cin>>designation;
            cout<<"\n Enter work experience : >>> ";
            cin>>employeeExperience;
            cout<<"\n Enter basic pay : >>> ";
            cin>>basicPay;
            
        }
      
        void displayEmployeeDetails(int i)
        {   
            cout<<"\n  Employee "<<i+1;
            cout<<"\n Employee ID : "<<employeeId;
            cout<<"\n Employee name : "<<employeeName;
            cout<<"\n Age : "<<age;
            cout<<"\n Designation : "<<designation;
            cout<<"\n Basic pay = "<<basicPay;
            cout<<"\n Experience = "<<employeeExperience;
            
            
        }

    };


    //class Other_Income

    class Other_Income:public virtual Employee
    {
        public:
        float otherIncome;
        char otherIncomeSource[20];

        public:
        void getOtherIncome_Info()
        {
            cout<<"\n\nOther Income Info";
            cout<<"\nEnter other income= ";
            cin>>otherIncome;
            cout<<"\n Specify source of income : ";
            cin>>otherIncomeSource;
        }

        void displayOtherIncome_Info()
        {
            cout<<"\n Other Income Info.";
            cout<<"\n Income = "<<otherIncome;
            cout<<"\n Source of Income : "<<otherIncomeSource;
        }
    };

    //class Increment

    class Increment:public virtual Employee
    {
        public:
        float incrementAmount;

        public:
        void calculateIncrement()
        {
            if(employeeExperience>25)
            {
                incrementAmount=5000;
            }
            else
            {
                incrementAmount=2000;
            }

        }
    };

    //class NetSalary

    class NetSalary:public Other_Income, public Increment
    {
        public:
        float totalSalary;

        public:
        void calculate_displayNetSalary()
        {
            totalSalary=basicPay+otherIncome+incrementAmount;
            cout<<"\n TOTAL SALARY = "<<totalSalary<<endl;


        }
    };

    int main()
    {
        NetSalary  E[20];

        int totalEmployees,i;

        cout<<"\n number of employees ? :>>>>>>> ";
        cin>>totalEmployees;

        for(i=0;i<totalEmployees;i++)
        {
            cout<<"\n Employee "<<i+1;
            E[i].getEmployeeDetails();
            E[i].getOtherIncome_Info();
        }

        cout<<"\n\n Employee Details \n";
        for(i=0;i<totalEmployees;i++)
        {
            E[i].displayEmployeeDetails(i);
            E[i].displayOtherIncome_Info();
            E[i].calculateIncrement();
            E[i].calculate_displayNetSalary();

        }

    }
