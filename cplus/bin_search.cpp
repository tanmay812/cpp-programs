// binary search and selection sort

#include <iostream>
using namespace std;

void binary(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    { // tells that end start greater than end then we have to return -1
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            printf("%d", mid);
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << -1;
}
int sort(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of the array:\t";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array:\t", i);
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element you want to search:\t";
    cin >> key;
    printf("%d", sort(arr, n, key));
    return 0;
}