//Static member vaiable and static member function

#include<iostream>
using namespace std;

class Account
{
    private://bydefault private
        int balance;    //Instance member variable
        static float ROI; //static member vairable or class variable
    
    public:
        void SetBalance(int b)
        {   
         balance = b; 
        }
        static void setROI(float r) //static member function 
        { 
            ROI = r ;
            cout << ROI <<"\n";
        }
};
float Account :: ROI = 3.14;

int main()
{
    Account A1,A2;
    A1.setROI(7.5);         //using object call static fun
    Account::setROI(4.5); //without object we can call like this 
    return 0;
}