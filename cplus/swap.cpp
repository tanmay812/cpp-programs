// swapping using inly two variables

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter value of a,b:\t";

    cin >> a >> b;
    a = a + b;
    b = a - b; // important
    a = a - b;
    printf("a is now :%d\nb is now:%d", a, b);
    return 0;
}