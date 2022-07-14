#include <iostream>
using namespace std;

int main()
{
    int n, t1=0, t2=1, nxtTerm=0;
    cout << "Enter the number of terms:"
    << endl;
    cin >> n;

    cout << "Fibonacci series:"
    << endl;

    for (int i = 1; i<=n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ","
            << endl;
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ","
            << endl;
            continue;
        }

        nxtTerm = t1 + t2;
        t1 = t2;
        t2 = nxtTerm;
        cout << nxtTerm << ","
        << endl;
    }
    
    return 0;
}