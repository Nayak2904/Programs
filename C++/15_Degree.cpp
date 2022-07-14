#include <iostream>
using namespace std;

int main()
{
    float f,c;
    cout << "Enter temperature in farenhit: "
    << endl;
    cin >> f;

    c=(f-32) *5/9;

    cout << "the value in celcius is:" << c
    << endl;
    return 0;
}