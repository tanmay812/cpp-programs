// N non negetive integer in array . i th integer of array A
// wants to choose contiguous arithemetic subarray of max length
// determine the maximum length of subarray

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n;
    cout << "Enter the size of the array:\t";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    int pd = a[1] - a[0]; // previous difference
    int j = 2;
    int curr = 2; // current differnce of the elements
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << "Maximum length of the subarray come to be:" << ans << endl;
    return 0;
}