// to print the sum of first N natural numbers

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter the N natural numbers:\t";
    cin >> N;

    if (N < 0)
    {
        cout << "N cant be less than zero!";
    }
    int i = 1;
    int sum = 0;
    for (i; i < N; i++)
    {
        sum += i;
    }
    cout << "Sum of first N natural numbers:\t" << sum << endl;
    return 0;
}