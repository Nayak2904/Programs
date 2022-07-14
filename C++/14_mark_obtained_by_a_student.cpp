#include <iostream>
using namespace std;

int main()
{
    int i, mark[6];
    float sum=0, avg, per;
    cout << "Enter marks obtained in 6 subject:"
    << endl;
    for ( i = 0; i < 6; i++)
    {
        cin >> mark[i];
        sum = sum+mark[i];
    }
    avg = sum/6;
    per = (sum/600) *100;
    cout << "Average mark is= " << avg
    << endl;
    cout << "Percentage mark is= " << per << "%"
    << endl;
    
    return 0;
}