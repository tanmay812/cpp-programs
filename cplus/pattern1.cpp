// printing rectangle given by user

#include <iostream>
using namespace std;

int main()
{

    int row, column;
    cout << "Enter the number of rows:\t";
    cin >> row;
    cout << "Enter the number of columns:\t";
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}