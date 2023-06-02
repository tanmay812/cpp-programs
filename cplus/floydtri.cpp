// code to print floyd's triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i, j, count = 1;
    cout << "Enter the number of roes you want:\t";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count << "\t";
            count += 1;
        }
        cout << endl;
    }
    return 0;
}