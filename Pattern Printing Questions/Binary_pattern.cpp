#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            cout << s;
        }
        if (s == 1)
        {
            s = 0;
        }
        else
        {
            s = 1;
        }

        cout << endl;
    }
    return 0;
}