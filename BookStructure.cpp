// Book Structure 
#include<iostream>
using namespace std;

struct  Book
{
    int BookId;
    char Title[20];
    float Price;
};

void Display(Book);
Book Input();

int main()
{
    Book b1;
    b1 = Input();
    Display(b1);
    
    return 0;
}

void Display(Book b)
{
    cout <<b.BookId<<" "<<b.Title<<" "<<b.Price <<"\n";
}

Book Input()
{
    Book b;
    cout << "Enter BookID, Book Title and Book Price:\n";
    cin >> b.BookId>>b.Title>>b.Price;
    return(b);
}
