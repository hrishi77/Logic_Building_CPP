//Airthematic operations in c++
#include <iostream>
using namespace std;

class Airthematic
{
    public:
        int iNo1;   //characteristics
        int iNo2;   //characteristics
        int iAns;   //characteristics

    Airthematic()
    {
        cout << "Default constructor \n";

        iNo1 = 0;
        iNo2 = 0;
        iAns = 0; 
    }

    Airthematic(int x,int y)
    {
        cout << "Paramerterised Constructor \n";

        iNo1 = x;
        iNo2 = y;
        iAns = 0;
    }

    Airthematic(Airthematic &ref)
    {
        iNo1 = ref.iNo1;
        iNo2 = ref.iNo2;
        iAns = ref.iAns;

        cout << "Copy Constructor \n";
    }

    ~Airthematic()
    {
        cout << "Destructor \n";
    }

    void Add()   //Behaviour
    {
        iAns = iNo1 + iNo2;
    }

    void Sub()
    {
        iAns = iNo1 - iNo2;
    }

    void Mul()
    {
        iAns = iNo1 * iNo2;
    }

    void Div()
    {
        iAns = iNo1/iNo2;
    }
};//end of the class 

int main()
{
    Airthematic obj1; //Default constructor
    Airthematic obj2(10,5); //Paramerterised constructor

    obj1.Add();
    cout<< obj1.iAns;

    obj2.Add();
    cout<< obj2.iAns;

    Airthematic obj3(obj2);  //Copy constructor
    cout<< obj3.iAns;

    cout << "Deallocating memory of all objects \n";

    obj2.Mul();
    cout<< obj2.iAns;
    
    return 0;
}

output:
Default constructor 
Paramerterised Constructor 
0
25
Copy Constructor 
25
Deallocating memory of all objects 
100
Destructor 
Destructor 
Destructor 

