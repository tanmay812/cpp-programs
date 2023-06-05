// inverted number pyramid

#include <iostream>
using namespace std;

int main()
{
    int n; // number of rows
    cout << "Number of rows:\t";
    cin >> n;
    int i, j;
    for (i = n; i >=0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}