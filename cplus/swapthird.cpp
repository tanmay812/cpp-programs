// swapping of number using third variable

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int temp;
    cout << "Enter num1:\t";
    cin >> num1;
    cout << "Enter num2:\t";
    cin >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << " " << num2;
    return 0;
}