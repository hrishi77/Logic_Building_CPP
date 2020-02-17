//Operator oveloading in c++(Its like as a class object addition)
#include <iostream>
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
            cout <<a<<"\n"<<b<<"\n";
        }
        Complex operator+(Complex c)
        {
            Complex Temp;
            Temp.a = a+c.a;
            Temp.b = b+c.b;
            return(Temp);
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.Set_Data(3,4);
    c2.Set_Data(5,6);
//    c3 = c1.operator+(c2);    OR below call 
    c3 = c1+c2;
    c3.show_Data();
    return 0;
}