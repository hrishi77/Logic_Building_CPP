//Inheritance accoring to access specifier 
#include <iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo()
        {
            i=11;
            j=21;
            cout << "Demo Constructor" <<endl;
        }
        void fun()
        {
            cout << "Demo Fun" << endl;
        }
        void gun()
        {
            cout << "Demo gun" << endl;
        }
};

class Hello : public Demo
{
    public:
        int x,y;
        Hello()
        {
            x = 51;
            y = 101;
            cout << "Hello Constructor";
        }
        void sun()
        {
            cout << "Hello sun" << endl;
        }
        ~Hello()
        {
            cout << "Hello Destructor" << endl;
        }
};

int main()
{
    Demo dobj;

    cout << sizeof(dobj) << endl;
    cout << dobj.i << endl;
    cout << dobj.j << endl;
    dobj.fun();
    dobj.gun();

    Hello hobj;
    cout << sizeof(hobj) << endl;
    cout << hobj.i << endl;
    cout << hobj.j << endl;
    cout << hobj.x << endl;
    cout << hobj.y << endl;

    hobj.fun();
    hobj.gun();
    hobj.sun();

    return 0;
}