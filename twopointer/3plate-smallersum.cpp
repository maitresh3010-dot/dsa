#include <iostream>
using namespace std;

int triplateplatesmaller(int arr[], int n, int target)
{
    int i = 0;
    int left = 1;
    int right = n - 1;
    int ans = 0;

    while (i < n - 2)
    {

        int sum = arr[i] + arr[left] + arr[right];

        if (sum < target)
        {
            left++;
        }

        else
        {

            ans = ans + (right - left);
            left++;
        }
    }
}

int main()
{
}