#include <iostream>
using namespace std;
class Book{
    string name;
    public:
    int chapters;
    int pages;
    Book(string naam){
        name = naam;
    }
    void showChapters();
    void showPages();
};
void Book::showChapters(){
    cout << "\n The no. of chapters present in the book is:"<< chapters
    << endl;
    showPages();
}
void Book::showPages(){
    cout << "\n The no. of pages present in the book:"<< pages
    << endl;
}
int main()
{
    Book book("shivajee");

    book.chapters = 5;
    book.pages = 10;

    book.showChapters();
    return 0;
}