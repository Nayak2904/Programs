#include <iostream>
using namespace std;

int main()
{
    char op;
    int a,b;
    
    cout << "Enter operators: +, -, *, /"
    << endl;
    cin >> op;

    cout << "Enter operands:\n"
    << endl;
    cin >> a >> b;

    switch (op)
    {
    case '+':
        cout << a << "+" << b << "=" << a+b
        << endl;
        break;
       
       case '-':
       cout << a << "-" << b << "=" << a-b
       << endl;
       break;
       
       case '*':
       cout<< a <<"*" << b << "=" << a*b
       << endl;
       break;

       case '/':
       cout << a << "/" << b << "=" << a/b
       << endl;
       break;
    
    default:
    cout << "ERROR!!!"
    << endl;
        break;
    }
    return 0;
}