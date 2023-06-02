// half pyramid using numbers:

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:\t";
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        cout << endl;
    }
    return 0;
}