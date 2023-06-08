// program to generate factorial of a number

#include <iostream>

using namespace std;
int factorial(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
        cout << i << "\t";
    }
    cout << endl;
    return fac;
}
int main()
{
    int num;
    cout << "Enter the number you want factorial of:\t";
    cin >> num;

    cout << "Value of factorial is:-\t" << factorial(num);
    return 0;
}