//Static  local variable 
#include<iostream>
using namespace std;

void fun()
{
    static int x; 
    int y=10;
    cout << x<<"\t"<<y<<endl;
}

int main()
{
    fun();
    return 0;
}