//One friend function access two private member of class .

#include<iostream>
using namespace std;
class B;
class A
{
    private: //default
        int a;
    public:
        friend void fun(A,B);
        void setData(int x)
        {
            a = x;
        }
};

class B
{   
    //bydfault private
    int b;
    friend void fun(A,B);
    public:
        void setData(int y)
        {
            b = y;
        }
};

void fun(A o1,B o2)
{
    cout << "sum is : "<< o1.a+o2.b << endl;
}

int main()
{
    A obj1;
    B obj2;
    obj1.setData(5);
    obj2.setData(7);
    
    fun(obj1,obj2);

    return 0;
}