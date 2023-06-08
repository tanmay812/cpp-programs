// writing function to print prime numbers between a and b

#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    int b;
    cout << "Enter the two numbers:\t";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}