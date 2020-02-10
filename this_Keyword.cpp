//this keyword use in cpp demo

#include <iostream>

using namespace std;

class Demo
{
    public:         //acess specifier
        int i;
        int j;

     Demo()
     {
         i= 20;
         this->j = 10;
     }

     Demo(int i,int j)
     {
         this->i = i;
         this->j = j;
         this->fun(11);
     }

     Demo(Demo &ref)
     {
         this->i = ref.i;
         this->j = ref.j;
     }

     //void fun(Demo *const this,int no)
     void fun(int No)
     {
         cout<<i;
         cout<<this->i;
        // cout<<this;
     }

     void gun()
     {
         this->fun(51);
     }
};//end of the class

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    obj1.fun(101);
    obj2.fun(201);
    obj1.gun();
}

