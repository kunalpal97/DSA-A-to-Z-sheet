#include <bits/stdc++.h>
using namespace std;
bool solve(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is Empty" << endl;
        return false;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cout << "Enter the Array Size : ";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = solve(arr, n);
    if (ans == true)
    {
        cout << "Array is Sorted.." << endl;
    }
    else
    {
        cout << "Array is Not Sorted.." << endl;
    }

    return 0;
}