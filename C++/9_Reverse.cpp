#include <iostream>
using namespace std;

int main()
{
    int a,b,r=0;
    cout << "Enter a number to revers it:\n"
    << endl;
    cin >> a;

    while (a != 0)
    {
        b= a%10;
        a = a/10;
        r= r * 10+b;
    }
    cout << "reversednumber is: " << r
    << endl;
    
    return 0;
}