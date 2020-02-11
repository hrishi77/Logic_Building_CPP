//function overloading example
#include <iostream>
using namespace std;

int area(int a, int b)
{
    return(a*b);
}

float area(int r)
{
    return(3.14*r*r);
}

int main()
{
    int r=0;
    cout << "Enter radious of circle:";
    cin >> r;
    float c = area(r);
    cout << "\nArea of Circle is:"<< c;

    int p,q,o;
    cout << "\nEnter length and width of rectangle:";
    cin >> p >> q;
    o = area(p,q);
    cout << "\nArea of Rectangle is:" << o <<"\n";

    return 0;
}


