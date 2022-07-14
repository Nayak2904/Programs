#include <iostream>
using namespace std;

int main()
{
    int n1, n2, sum=0;

    cout << "Enter numbers between a range"
    << endl;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        sum = sum + i;
    }

    cout << "sum= " << sum
    << endl;

    
    return 0;
}