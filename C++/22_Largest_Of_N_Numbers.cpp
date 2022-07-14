#include <iostream>
using namespace std;

int main()
{
    int size, current_value, largest_value;

    cout << "Enter total number you want to add"
    << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value to add: "
        << endl;
        cin >> current_value;
        
        if (i == 0 || current_value > largest_value)
        {
            largest_value = current_value;
        }
        
    }
        cout << "Largest value: " << largest_value
        << endl;
    
    return 0;
}