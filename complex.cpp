#include<iostream>
using namespace std;
class Complex
{
    public: int real,imaginary;

    Complex(int r=0, int i=0)
    {
        real = r;
        imaginary = i;
    }
    Complex operator-(Complex &c)
    {
        return Complex(real-c.real,imaginary-c.imaginary);
    }
};
int main()
{
    Complex c1(100,200),c2(30,40);
    Complex c3=c1-c2;
    cout<<"Product:"<<c3.real<<"-"<<c3.imaginary<<"i"<<endl;
}