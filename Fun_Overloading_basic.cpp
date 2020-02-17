//Basic program for function overloading
#include<iostream>
using namespace std;

class Demo
{
    public:
        int Add(int iNo1,int iNo2)
        {
            return iNo1+iNo2;
        }
        
        int Add(int iNo1,int iNo2, int iNo3)
        {
            return iNo1+iNo2+iNo3;
        }
        
        float Add(float No1,float No2)
        {
        	return No1+No2;
        }
};

int main()
{
	Demo dobj;
	
	int iRet = 0;
	
	float fRet = 0.0;
	
	int i=10,j=20,k=30;
	float x=10.0, y=20.0 ,z=30.10;
	
	iRet = dobj.Add(i,j);
    cout << "Add1 "<<iRet;
	iRet = dobj.Add(i,j,k);
	cout << "\nAdd2 "<<iRet;

	fRet= dobj.Add(x,y,z);
	cout << "\nAdd3 "<<fRet;

	return 0;
} 
       
