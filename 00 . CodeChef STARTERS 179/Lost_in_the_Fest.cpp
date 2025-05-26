#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;
        cin >> n;
        int arr[n];
        int minn;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int high = arr[n - 1];

        int count = 0;
        // cout << n << endl;
        // cout << high << endl;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] >= high)
            {
                int r = n - i;
                cout << r - 1 << endl;
                break;
            }
        }
    }
}
