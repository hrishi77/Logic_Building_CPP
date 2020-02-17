//operator overloading pre /post increment and decrement
#include <iostream>
using namespace std;

class Integer
{
    private :
        int x;
    public:
        void setData(int a)
        {
            x = a;
        }
        void showData()
        {
            cout << "x = "<< x << endl;
        }
        Integer operator++()    //pre
        {
            Integer i;
            i.x = ++x;
            return(i);
        }
        Integer operator++(int)     //post
        {
            Integer i;
            i.x = x++;
            return(i);
        }
};

int main()
{
    Integer i1,i2;
    i1.setData(3);
    i1.showData();
    i2 = ++i1;      //i2=i1.operator  pre-increment 
    i2 = i1++;          //post-increment
    i1.showData();
    i2.showData();

    return 0;
}