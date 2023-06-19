// program for making binary to decimal conversion

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int bin;
    cout << "Enter the binary number:\t";
    cin >> bin;
    int i = 0;
    int dec = 0;
    while (bin > 0)
    {
        int n = bin % 10;
        dec = dec + (n*pow(2, i));
        i++;
        bin = bin / 10;
    }
    cout << "Decimal value is:\t";
    cout << dec;
    return 0;
}