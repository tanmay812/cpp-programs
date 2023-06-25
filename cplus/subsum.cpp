// subaaray with given sum
// finding the subarray from the given array to get sum as 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array:\t";
    cin >> n;
    int s;
    cout << "Enter the sum you want:\t";
    cin >> s;
    int A[n];
    int emp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = A[i];
        for (int j = i + 1; j < n; j++)
        {
            count += A[j];
            if (count == s)
            {
                printf("Element from index %d to %d \n", i + 1, j + 1);
                return 0;
            }
        }
    }
    return 0;
}