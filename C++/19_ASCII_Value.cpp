#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "\nThe ASCII value of all characters area:"
    << endl;

    for ( i = 0; i <= 225; i++)
    {
        cout<< "The ASCII value of " << (char)i << " = " << i <<endl;
    }
    
    return 0;
}