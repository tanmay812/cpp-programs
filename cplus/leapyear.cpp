// program to check if a year is a leap year or not
// conditiona for a leap year
//  1) divisible by 4 , divisible by 400 and century year all not are leap years

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year:\t";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Year is a Leap Year;\n");
            }
            else
            {
                printf("Year in not a leap year:\n ");
            }
        }
        else
        {
            printf("Year is a leap year\n");
        }
    }
    else
    {
        cout << "Year is not a leap year" << endl;
    }
    return 0;
}