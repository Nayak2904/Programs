#include <iostream>
using namespace std;

int main()
{
    int n, range;

    cout << "Enter a positive integer:"
    << endl;
    cin >> n;
    
    // Upto a range.
    cout << "Enter your range: "
    << endl;
    cin >> range;

    for (int i = 1; i <= range; ++i)
    {
        cout << n << "*" << i << "=" << n*i
        << endl;
    }
    
    return 0;
}