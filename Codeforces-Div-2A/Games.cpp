// Codeforces Link : https://codeforces.com/problemset/problem/268/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 0, inp = 0, cnt = 0;
    cin >> n;

    // capture all inputs into vector vc
    vector<int> vc;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> inp;
        vc.push_back(inp);
    }

    vector<int> vceven;
    vector<int> vcodd;

    // Basic idea is if left hand side( indexes in vector : 0,2,4,6,7,8.. ) and right hand side( indexes in vector : 1,3,5,7,9 ...) in input have any common values
    // then that means we increment count

    for (int i = 0; i < vc.size(); i++)
    {
        if (i == 0)
        {
            vceven.push_back(vc.front());
            continue;
        }
        // odd indexes
        if (i & 1)
            vcodd.push_back(vc[i]);
        else
            vceven.push_back(vc[i]);
    }

    for (auto x : vceven)
    {

        // logic tightens if multiple occurrences of a value are present so we need to capture count not just find if common value is there or not
        unsigned val = count(vcodd.begin(), vcodd.end(), x);

        if (val >= 1)
        {
            cnt += val;
        }
    }
    cout << cnt;
}