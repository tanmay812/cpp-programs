// code to find maximum and minimum in an array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array:\t";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxno = INT8_MIN;
    int minno = INT8_MAX;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > maxno)
        {
            maxno = arr[j];
        }
        if (arr[j] < minno)
        {
            minno = arr[j];
        }
    }

    cout << maxno << endl;
    cout << minno;
    return 0;
}