//Default argument 
#include<iostream>
using namespace std;
class Circle
{
    public:
        float fArea;
    void Calcuate(float radius, float pi = 3.14)
    {
        this->fArea = pi * radius *radius; 
    }
};

int main()
{
    Circle cobj;
    cobj.Calcuate(10.0, 7.2);
    cout <<"Without using default argument:"<<cobj.fArea <<"\n"; 

    Circle dobj;
    dobj.Calcuate(10.0);
    cout <<"using default argument:"<< dobj.fArea <<" \n";

    return 0;
}
