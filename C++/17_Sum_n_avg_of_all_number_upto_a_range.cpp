#include <iostream>
using namespace std;

int main()
{
    int n1, n2, sum=0, avg;

    cout << "Enter your range:"
    << endl;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        sum = sum + i;
        avg = sum / n2;
    }
    cout << "sum of digits of your range is= " << sum
    << endl;
    cout << "avegare os digits of your range is= " << avg
    << endl;
    
    return 0;
}