#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout << "Enter two number to swap: "
    << endl;
    cin >> a >> b;

    temp = a;
    a= b;
    b = temp;

    cout << "After swapping the number is: "
    << endl;
    cout << a << " " << b
    << endl;
    return 0;
}