#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter any three number:\n"
    << endl;
    cin >> a >> b >> c;

    if (a>b && a>c)
    {
        cout << a << " is greatest among three numbers."
        << endl;
    }

    if (b>a && b>c)
    {
        cout << b << " is greatest among three number"
        << endl;
    }
    else
    {
        cout << c << " is greatest among three number"
        << endl;
    }

    return 0;
}