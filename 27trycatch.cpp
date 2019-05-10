#include<iostream>

	using namespace std;

	class Numbers
	{
		public:
		int firstNum,secondNum;
		int result;

		void getNumbers()
		{
				cout<<"\n\tEnter the first number : ";
				cin>>firstNum;

				cout<<"\n\tEnter the second number : ";
				cin>>secondNum;	

				if(cin.fail())
					throw('a');
		}

		int performDiv()
		{
			result=firstNum/secondNum;
			return result;
		}
	};

	int main()
	{
		Numbers O;
		int a;

		try
		{
			O.getNumbers();
			if(O.secondNum==0)
			
				throw 0;
				a=O.performDiv();
				cout<<"\nResult = "<<a<<"\n\n";
							
		}
		

		catch(int a)
		{
			cout<<"\nDivision by 0 not possible!"<<"\n\n";
		}

		catch(char a)
		{
			cout<<"\n Datatype mismatch!"<<"\n\n";
		}

		
}
