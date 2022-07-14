#include <iostream>
using namespace std;
class Book
{
public:
    string topic;
    string defination;

    Book(string name, string def)
    {
        topic = name;
        defination = def;
    }
    void display()
    {
        cout << "Topic = " << topic << endl;
        cout << "Defination = " << defination << endl;
    }
};

int main()
{

    Book book1("Solid", "Astate of matter thatholds a definite shape and has a strong intermolecular force.");
    Book book2("Gas", "A state of matter that holds no definite volume and has a very weak intermolecular force.");
    Book book3("Liquid", "A state of matter that holds no definite shape and has a weak intermolecular force.");
    Book book4("Plasma", "A state of matter which is highly conductive and dominated by electric and magnetic field.");

    cout << "State Of Matter"
         << endl;

    cout << "1.Solid\n 2.Gas\n 3.Liquid\n 4.Plasma"
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
    default:
        cout << "This topic is out of syllabus!!!"
             << endl;
        break;
    }
    return 0;
}