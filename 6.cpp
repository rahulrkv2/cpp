#include<iostream>
using namespace std;
class Bank
{
 int accno,bal,initial,final;
 char s[500],acctype[100];
 public:
  Bank()
 {
  initial=1000;
  final=100;
  bal=100;
 }
 void assign()
 {
  cout<<"Enter the Account number:";
  cin>>accno;
  cout<<"\nEnter the name of the depositor:";
  cin>>s;
  cout<<"\nenter the account type:";
  cin>>acctype;
  cout<<"\nenter the initial balance:";
  cin>>initial;
  bal=initial;
 }
 void deposit()
 {
  int d;
  cout<<"\nenter the deposit:";
  cin>>d;
  bal=bal+d;
  cout<<"\nfinal balance:"<<bal; 
}
 void withdraw()
 {
  int w;
  cout<<"\nenter the amount to be withdrawn:";
  cin>>w;
  if(bal>=w)
    {
     cout<<"Successful";
     bal=bal-w;
     cout<<"\nfinal balance:"<<bal;
    }
  else
     cout<<"unsuccessful transaction";
 }
void display()
{
 cout<<"\nAccount Holder:"<<s;
 cout<<"\nAccount number:"<<accno;
 cout<<"\nAccount type:"<<acctype;
 cout<<"\nBalance:"<<bal;
}
};
int main()
{
Bank b;
b.assign();
b.deposit();
b.withdraw();
b.display();
return 0;
}
