#include <iostream>
using namespace std;
    int reverseDigit(int num){
        int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
    }
int main()
{
    int n;
    cout << "Enter any number:"
    << endl;
    cin >> n;
    cout << "Reverse of this number is :" << reverseDigit(n)
    << endl;
    return 0;
}