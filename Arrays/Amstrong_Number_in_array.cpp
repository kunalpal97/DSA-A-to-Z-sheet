#include <bits/stdc++.h>

using namespace std;

bool solve(int arr[], int n)
{
    // pahle sare elemnt ko array se nikal ke usko ek proper number banana hai

    // find the array element in sequence
    int ans = 0;
    int x = arr[0];

    for (int i = 1; i < n; i++)
    {
        ans = x * 10 + arr[i];
        x = ans;
    }

    // cout << "Array ke number ke line mai.. lane ke baad " << ans << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(arr[i], n); // iss se power of arrays nikal jayege
    }
    // cout << " Array ke Element ko cube karne ke baad " << sum << endl;
    if (ans == sum)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = solve(arr, n);

    if (ans)
    {
        cout << "It is Armstrong Number " << endl;
    }
    else
    {
        cout << "It is not an armstrong Number " << endl;
    }
}