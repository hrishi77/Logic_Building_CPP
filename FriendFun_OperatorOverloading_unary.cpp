//friend function Unary operator overloading in cpp
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void Set_Data(int x, int y)
        {
            a=x;
            b=y;
        }
        void show_Data()
        {
            cout << "a = "<<a<< " b = " << b<<endl;
        }
        friend Complex operator-(Complex);
};

Complex operator-(Complex X)
{            
    Complex Temp;
    
    Temp.a = -X.a;
    Temp.b = -X.b;
    return(Temp);
}

int main()
{
    Complex c1,c2,c3;
    c1.Set_Data(3,4);
    c2=-c1;             // c2 = c1.operator-();
    c2.show_Data();
    c1.show_Data();

    return 0;
}