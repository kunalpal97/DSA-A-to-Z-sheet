#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int amt)
{
    int count = 0;
    int num = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        amt = amt - arr[i];
        if (amt < 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    int arr[n];

    cout << endl
         << "Enter the Array elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int amount;
    cout << endl
         << "Enter the Amount : ";
    cin >> amount;

    int ans = solve(arr, n, amount);
    cout << "The ice cream can be purchase is : " << ans << endl;
    return 0;
}