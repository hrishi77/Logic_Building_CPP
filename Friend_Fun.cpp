//friend function in c++
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a = x;
            b = y;
        }
        void ShowData()
        {
            cout << "a = "<<a<< " b = "<<b<<endl;
        }
        friend void fun(Complex);
};

void fun(Complex c)
{
    cout << "sum of a and b : "<<c.a+c.b <<endl;
}

int main()
{
    Complex c1;
    c1.setData(5,7);
    c1.ShowData();

    fun(c1);

    return 0;
}
