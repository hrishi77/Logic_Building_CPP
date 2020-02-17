//Demo  class
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void Set_Data(int,int);
        void Show_Data()            //Act as inline function if they are in class
        {
            cout <<"a="<<a<<"\nb="<<b<<"\n";
        }
};

void Complex::Set_Data(int x,int y)
{
    a=x;
    b=y;
}

int main()
{
    Complex c1;
    c1.Set_Data(5,7);
    c1.Show_Data();
    
    return 0;
}