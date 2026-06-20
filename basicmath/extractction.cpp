#include <iostream>
using namespace std;
int main()
{
    int number = 1334;

    int count = 0;

    while (number > 0)
    {

        int n = number % 10;

        cout << n;

        count++;

        number = number / 10;
    }
}