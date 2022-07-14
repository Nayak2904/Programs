#include <iostream>
using namespace std;
    bool Palindrome( int n ){
        int rem, rev=0;
        while (n>0)
        {
            rem= n % 10;
            rev = rev*10+rem;
            n = n/10;
        }
        return rev;
    }
int main()
{
    int num;
    cout << "Enter any number to chceck:"
    << endl;
    cin >> num;
    if (Palindrome(num))
    {
        cout << num << " is palindrome."
        << endl;

    }
    else
    {
        cout << num << " is not a palindrome."
        << endl;
    }
       
    return 0;
}