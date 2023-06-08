// program to print paascal pattern

#include <iostream>
using namespace std;
int factorial(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    int n;
    cout << "Enter the number of rows you want:\t";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(i - j) * factorial(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}