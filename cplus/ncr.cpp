// calculating binary coefficient
// N c r

#include <iostream>
using namespace std;

int factorial(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
        }
    cout << endl;
    return fac;
}

int main()
{
    int n;
    int r;
    cout << "Enter the N and r :\t";
    cin >> n >> r;
    printf("The binomial coefficient for n =%d and r=%d is:\t", n, r);
    int coeff = factorial(n) / (factorial(n - r) * factorial(r));
    cout << coeff << endl;
    return 0;
}