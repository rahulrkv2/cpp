
    #include<iostream>
    #include <algorithm>
    using namespace std;

    class list
    {
        public:
        int id;
        int pricepp;
        int num;
        int totprice;
       // float m2;
        //float m3;
        float mavg;

        public:
        void getEmployeeDetails(int i)
        {
            cout<<"\n\t           ";
            cout<<"\n\tEnter details \n\t     code no : ";
            cin>>id;
           
            
            cout<<"\tprice per unit : ";
            cin>>pricepp;
             cout<<"\tno of untis : ";
            cin>>num;
             totprice=pricepp*num;
            

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
            cout<<"\n\t "<<i+1;
            cout<<"\tcode "<<id;
            cout<<"\t      price per unit : "<<pricepp;
            
            cout<<"\t       quantity  = "<<num;
            cout<<"\t       tot price  = "<<totprice;
            cout<<"\n";
        }

    };


   

    int main()
    {
         list E[20];
        int totalEmployee;
        int i;

        cout<<"\n\t";
        int ch;
       
    int g=1;
        int base=0;

     while(g){
         cout<<"enter choice   0-enter    1-view    2-delete    3-print net price";
        cin>>ch;

        if(ch==0){
        cout<<"\nEnter the number of details to enter  ";
        cin>>totalEmployee;
        
        for(i=base;i<(base+totalEmployee);i++)
        {
            E[i].getEmployeeDetails(i);
        }
        base=base+totalEmployee;
           }
        else if(ch==1){
        cout<<"\nitem list list\n";
        for(i=0;i<base;i++)
        {
            E[i].printDetails(i);
        } }
        else if(ch==2){
   

          cout<<"\nitem  list\n";
        for(i=0;i<base;i++)
        {
            E[i].printDetails(i);
        }


        cout<<"\nenter the id you want to delete       ";
        int de;
        cin>>de;
         
         for(i=0;i<totalEmployee;i++)
        {
           if(E[i].id==de)
            {
                E[i].id=0;
                E[i].pricepp=0;
                E[i].num=0;
                E[i].totprice=0;

            }
        }
   
            cout<<"\nitem  list\n";
        for(i=0;i<base;i++)
        {
            E[i].printDetails(i);
        }


        }
        else if(ch==3){
   int pz=0;
          for(i=0;i<base;i++)
        {
           pz=pz+E[i].totprice;
        }

         cout<<"\n net price is"<<pz;
        }
       

    cout<<"\n continue  0:n  1:y";
    cin>>g;

     }           
    




}
