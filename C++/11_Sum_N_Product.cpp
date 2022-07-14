#include <iostream>
using namespace std;

int main()
{
    int a,b,sum,pro;
    cout << "Enter any two number to find Sum and Product: \n"
    << endl;
    cin >> a >> b;

    sum= a+b;
    pro= a*b;
    cout << "sum of " << a << " and " << b << " is= " << sum 
    << endl;
    cout << "product of " << a << " and " << b << " is= " << pro
    << endl;
    return 0;
}