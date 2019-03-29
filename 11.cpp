#include<iostream>
using namespace std; 
class Complex { 
private: 

    int real, imag; 

public: 

    Complex(int r = 0, int i =0)  {real = r;   imag = i;} 

    Complex operator + (Complex const &obj) { 

         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 

         return res; 

    } 

    void print() { cout << real << " + i" << imag << endl; } 
}; 

int main() 
{


    int i1,r1,i2,r2; 
    cout << " enter real and imp part>> 1"<< endl;
    cin>>r1;
    cin>>i1;
    cout << " enter real and imp part>> 2"<< endl;
    cin>>r2;
    cin>>i2;
    Complex c1(r1, i1), c2(r2, i2); 

    Complex c3 = c1 + c2; 

    c3.print(); 
} 
