#include <iostream>
using namespace std;

int main()
{
    int arr[10], i;

    cout << "Enter any 10 numbers: "
    << endl;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        cin >> arr[i];
    }

    cout << "All even numbers are: "
    << endl;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        if (arr[i]%2 == 0)
        {
            cout << arr[i] << " "
            << endl;
        }
        
    }
    cout << 
     endl;
    
    return 0;
}