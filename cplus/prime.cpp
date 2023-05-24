// checkinf a number if its prime or not

#include <iostream>
using namespace std;

int main()
{

    int num;
    int i;
    cout << "Enter the number to be checked:\t";
    cin >> num;
    for (i=2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Non prime\n";
            break;
        }
        else
        {
            continue;
        }
    }
    if (i == num)
    {
        cout << "prime number" << endl;
    }
    return 0;
}