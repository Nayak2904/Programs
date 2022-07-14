#include <iostream>
using namespace std;

int main()
{
    int a,b,add,sub,mul,div;
    cout << "Enter any two numbers:\n"
    << endl;
    cin >> a>> b;
    add= a+b;
    sub= a-b;
    mul= a*b;
    div= a/b;
    
    cout << "Addition of two number is:" << add 
    << endl;
    cout << "Substraction of two number is:" << sub
    << endl;
    cout << "Multiplication of two number is:" << mul
    << endl;
    cout << "Division of two number is:" << div
    << endl;
    return 0;
}