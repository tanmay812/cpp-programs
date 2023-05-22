// first cplus
#include <iostream>
using namespace std;
// question to find maximum from three given numbers

int main()
{
    int num1, num2, num3;
    cout << "Enter the amounts:";
    cin >> num1 >> num2 >> num3; // input of three numbers

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1;
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            cout <<"The largest number is:"<< num2;
        }
    }
    else
    {
        cout << num3;
    }
    return 0;
}