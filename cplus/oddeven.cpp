// program to check whether a numbr os odd or even
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number:\t";
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number is an even number\n";
    }
    else
    {
        cout << "The number is odd";
    }
    return 0;
}
