// checking if a number if armstrong number or not

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int dig;
    int sum = 0;
    int k = n;
    while (n > 0)
    {
        dig = n % 10;
        sum = sum + (dig * dig * dig);
        n = n / 10;
    }
    if (sum == k)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Number is not an armstrong number" << endl;
    }
    cout << pow(k, 3);
    return 0;
}