#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number";
    cin >> number;

    int rev = 0;
    int sum = 0;
    int dup = number;

    while (number > 0)
    {
        int ld = number % 10;

        sum = sum + (ld * ld * ld);
        int number = number / 10;
    }

    if (sum == dup)
    {
        cout << "number is amstrong";
    }
    else
    {
        cout << "not amstrong";
    }
}