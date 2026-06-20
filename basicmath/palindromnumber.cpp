#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number";
    cin >> number;
    int reverse = 0;
    int duplicate = number;
    while (number > 0)
    {

        int lastdigit = number % 10;

        reverse = (reverse * 10) + lastdigit;

        number = number / 10;
    }
    if (duplicate == reverse)
    {
        cout << "number is palindrom";
    }

    else
    {
        cout << "number is not palindrom";
    }
}