// code to generate table

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the num for which you want table till 20:\t";
    cin >> num;
    int mult;
    for (int i = 0; i <= 20; ++i) //pre precedent
    {
        mult = num * i;
        printf("%d * %d = %d\n", num, i, mult);
    }
    return 0;
}