//call by value in c++

#include<iostream>
using namespace std;

int Sum(int x, int y)
{
    return(x+y);
}

int main()
{
    int a = 5, b = 6;
    int iSum = Sum(a,b);
    cout << "Sum is "<< iSum << "\n";
}