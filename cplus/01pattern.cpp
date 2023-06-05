// 10101010101 pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row:\t";
    cin >> n;
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else if ((i + j) % 2 != 0)
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}