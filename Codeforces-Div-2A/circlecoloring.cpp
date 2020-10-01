//  https://codeforces.com/contest/1408/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int diff = 1;
        for (int i = 1; i < n; i++)
        {
            diff += (a[i] != a[i - 1]);
        }
        if (k == 1)
        {
            cout << (diff == 1 ? 1 : -1) << '\n';
            continue;
        }
        cout << max(1, (diff - 1 + (k - 2)) / (k - 1)) << '\n';
    }
}
