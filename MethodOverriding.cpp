//Methdo overroding in cpp
#include<iostream>
using namespace std;

class A
{
    public :
        void f1()
        {
            cout << " This is f1 class A"<<endl;
        } 
};
class B : public A
{
    public:
        void f1()       //medthod overriding
        {
            cout << " This is f1 class B"<<endl;
        }

};

int main()
{
    B bobj;
    A aobj;
    
    bobj.f1();
    aobj.f1();

    return 0;
}




