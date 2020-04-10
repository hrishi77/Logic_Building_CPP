//read file program
#include <iostream>
#include<fstream>
#include<string>

int main() 
{
    std::string cipher,temp;
    std::fstream FileOut;                      
    FileOut.open("a.txt");                  

    if(FileOut.is_open()) 
    { 
        while (!FileOut.eof()) 
        { 
            (getline(FileOut,cipher,' ')) ;
            temp += cipher;
        }
    }
    std::cout<<temp <<"\n";
}
