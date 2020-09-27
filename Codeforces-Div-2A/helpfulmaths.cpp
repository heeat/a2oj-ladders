// Codeforces Link : https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    string str;
    cin >> str;

    string stfinal;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '+')
            stfinal.push_back(str[i]);
    }

    sort(stfinal.begin(), stfinal.end());
    cout << stfinal[0];

    for (int i = 1; i < stfinal.size(); i++)
    {
        cout << "+" << stfinal[i];
    }
}