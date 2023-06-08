// printing fibonacci series

#include <iostream>
using namespace std;

void fibbonaci(int num)
{
    int ini = 0;
    int sec = 1;
    cout << ini << endl
         << sec << endl;
    for (int i = 0; i <= num; i++)
    {
        ini = ini + sec;
        sec = ini + sec; //
        cout << ini << endl
             << sec << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the limit till which you want the series:\t";
    cin >> num;
    fibbonaci(num);
    return 0;
}