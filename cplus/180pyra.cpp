// 180 degreee pyramid

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number or ros:\t";
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < n - i)
            {
                cout << " ";
            }
            else{
                cout << "*";
            }
                }
        cout << endl;
    }
    return 0;
}