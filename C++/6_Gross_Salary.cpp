#include <iostream>
using namespace std;

int main()
{
    float basic, gross, da, hra;
    
    cout << "Enter basic salary of shivajee:"
    << endl;
    cin >> basic;

    da= basic * 0.4;
    hra= basic * 0.2;
    gross= basic + da + hra;

    cout << "da is:" << da
    << endl;
    cout << "hra is:"<< hra
    << endl;

    cout << "Gross salary=" << gross
    << endl;
    return 0;
}