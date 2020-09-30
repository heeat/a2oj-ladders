// Codeforces Link : https://codeforces.com/contest/263/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;

    // this is row in the matrix
    for (int i = 1; i <= 5; ++i)
    {
        // this is column in the matrix
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            // if we find 1 then x and y are positions of 1 in matrix
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3);
            }
        }
    }
    return 0;
}