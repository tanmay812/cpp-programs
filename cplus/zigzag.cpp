// zig zag pattern using cpp

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:\t";
    cin >> n;
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}