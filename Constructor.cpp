//demo constructor in cpp
//constructor will call as per how much we create obejcts in main fun
#include <iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        Complex() //Default Constructor 
        { 
            cout << "This is constructor\n";
            a=0,b=0;
        }
        Complex(int x, int y) //parametrised constructor
        {
            a=x,b=y;
        }
        Complex(int k) // parametrised constructor /constructor Overloadig.
        {
            a=k;
        }
        Complex(Complex &c) //copy constructor
        {
            a=c.a;
            b=c.b;
        }
        void Display()
        {
            cout << a<<"\n"; 
            cout << b<<"\n";
        }
};

int main()
{
    Complex c1(7,5),c2(10),c3;
    Complex c4=c1;
    c4.Display();
    return 0;
}