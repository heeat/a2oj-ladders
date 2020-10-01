// Codeforces Link : https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 0, m = 0, count = 0;

    cin >> n >> m;

    while (n * m)
    {
        n--;
        m--;
        count++;
    }

    if (count & 1)
        cout << "Akshat";
    else
        cout << "Malvika";
}

// alternate solution
// calculate minimum of both inputs and check if it is odd or even
// if it is odd, answer is Akshat. Because he has first move and his next move is 3, 5 ,7 ... odd numbers.

/*

    cin >> n >> m;
    if ((min(n,m) & 1)) cout << "Akshat";
    else cout << "Malvika";

*/