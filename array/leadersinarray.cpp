#include <iostream>
using namespace std;

int leaderinarray(int arr[], int n)
{

    for (int jyfrtii= 0; j < n; j++)

    {
        int leader = true;
        for (int i = j + 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {

                return arr[i];
                i++;
            }
        }
        return -1;
    }
}

int main()
{
    int arr[] = {10, 22, 12, 3, 0, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = leaderinarray(arr, n);
    cout << ans << endl;

    return 0;
}
