#include <iostream>
using namespace std;

int main()
{
    int i, n, count=0;
    cout << "Enter a number to check:"
    << endl;
    cin >> n;

    for ( i = 2; i < n; i++)
    {
            if ( n % i == 0)
            {
                count++;
                break;
            }
            
    }
    if (count == 0)
    {
        cout << "\n It is a prime number."
        << endl;
    }
    else
    {
        cout << "\n It is not a prime number."
        << endl;
    }
    
    return 0;
}