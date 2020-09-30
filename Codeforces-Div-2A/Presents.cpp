// Codeforces Link : https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int num = 0, gift = 0;

    //map
    map<int, int> pr;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        // use map to store key as gift and index as value
        cin >> gift;
        pr[gift] = i;
    }

    for (auto x : pr)
    {
        // print value
        cout << x.second << " ";
    }
}