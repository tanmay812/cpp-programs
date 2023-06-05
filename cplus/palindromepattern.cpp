// printing palindrome number pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i, j;
    cout << "Enter the number of rows:\t";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = i; j > 0; j--)
        {

            cout << j ;
        }
        for (j = 2; j <= i; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
    return 0;
}