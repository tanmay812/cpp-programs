// printing prime number between a to b

#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;
    cout << "Enter a:\t";
    cin >> a;
    cout << "Enter b:\t";
    cin >> b;
    // nested loop
    int i;
    int j;
    for (i = a; i < b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
            }
        }
        if (i == j)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}