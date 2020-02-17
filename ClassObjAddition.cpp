// class object memebers addition
//Demo  class
#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void Set_Data(int x,int y)
        {
            a=x;
            b=y;
        }
        void Show_Data()            
        {
            cout <<"a="<<a<<"\nb="<<b<<"\n";
        }
        Complex Add(Complex c)
        {
            Complex Temp;
            Temp.a = a + c.a;
            Temp.b = b + c.b;
            return(Temp);
        }
};

int main()
{
    Complex c1,c2,c3;
    
    c1.Set_Data(5,7);
    c2.Set_Data(3,3);
    c3 = c1.Add(c2);//(8,10)

    c3.Show_Data();
    
    return 0;
}