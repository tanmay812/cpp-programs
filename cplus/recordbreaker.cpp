// record breaker google kick start question
// strcitly greater thean all the previous values
// value greater than following days

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n;

    cout << "enter the number of days:\t";
    cin >> n;

    int a[n + 1];
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << "Number of housefull is :" << ans << endl;
    return 0;
}