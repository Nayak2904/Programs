#include <iostream>
using namespace std;
class Book
{
public:
    string topic;
    string defination;
    string exapmle;

    Book(string name, string chpt, string eg)
    {
        topic = name;
        defination = chpt;
        exapmle = eg;
    }
    void display()
    {
        cout << "Topic = " << topic << endl;
        cout << "Defination = " << defination << endl;
        cout << "Exapmle = " << exapmle << endl;
    }
};

int main()
{

    Book book1("Array", "An array is a collection of similar data elements stored at a contiguous memory location", " indexed arrays, multidimensional arrays, and associative arrays.");
    Book book3("Stacks", "A stack is a linear data structure that follows the principle of Last In First Out (LIFO).", "LIFO");
    Book book2("Linked List", "A linked list is a data structure where the objects are arranged in a linear order.", "Music player");
    Book book4("Queue", "A collection of items in which only the earliest added item may be accessed.", "Assembly line");
    Book book5("Tables", "A table is a data structure that organizes information into rows and columns.", "I have no idea about that!!!");

    cout << "Classic Data Structure"
         << endl;

    cout << "1.Array\n 2.Linked List\n 3.Stacks\n 4.Queue\n 5.Tables"
         << endl;

    int sln;
    cout << "Enter the topic no.:"
         << endl;
    cin >> sln;

    switch (sln)
    {
    case 1:
        book1.display();
        break;
    case 2:
        book2.display();
        break;
    case 3:
        book3.display();
        break;
    case 4:
        book4.display();
        break;
    case 5:
        book5.display();
        break;

    default:
        cout << "This topic is out of syllabus!!!"
             << endl;
        break;
    }
    return 0;
}