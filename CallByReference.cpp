//Call by reference

#include<iostream>
using namespace std;

int Sum(int &x, int &y)
{
    return(x+y);
}

int main()
{
    int a = 15, b = 10;
    int iSum = Sum(a,b);
    cout << "Sum is "<< iSum << "\n";
}