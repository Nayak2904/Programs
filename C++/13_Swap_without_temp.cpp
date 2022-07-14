#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter two number to swap"
    << endl;
    cin >> a >> b;

    a= a+b;
    b= a-b;
    a= a-b;

    cout << "After swapping a= " << a << ", b= " << b
    << endl;
    return 0;
}