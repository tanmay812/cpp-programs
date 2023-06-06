// code to reverse a number cpp

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number :\t";
    cin >> num;
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << reverse << endl;
    return 0;
}
