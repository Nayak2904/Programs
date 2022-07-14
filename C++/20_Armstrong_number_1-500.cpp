#include <iostream>
using namespace std;

int main()
{
    int num, count=1, sum, rem;

    while (count <= 500)
    {
        num = count;
        sum = 0;

        while (num)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (count == sum)
        {
            cout << count << " is a armstrong number."
            << endl;
        }
        count++;
        
    }
    
    return 0;
}