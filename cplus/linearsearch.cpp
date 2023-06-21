// code for linear search in an array

#include <iostream>
using namespace std;

int linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; // else number not found then it will return -1
}

//time complexity of the function : O[n]

int main()
{
    int n;
    cout << "Enter the size of the array:\t";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the array:\t";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to find:\t";
    cin >> key;
    printf("%d", linear(arr, n, key));
    return 0;
}
