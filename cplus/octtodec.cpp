// program to convert octal to deciaml

#include <iostream>
using namespace std;
#include <math.h>

int oct2dec(int n)
{
    int i = 0;
    int dec = 0;
    while (n > 0)
    {
        int dig = n % 10;
        dec = dec + (dig * pow(8, i));
        i++;
        n = n / 10;
    }
    return dec;
}

int main()
{
    int oct;
    cout << "Enter the Octal form :\t";
    cin >> oct;
    printf("%d", oct2dec(oct));
    return 0;
}