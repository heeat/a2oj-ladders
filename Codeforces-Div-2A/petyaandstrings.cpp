// Codeforces Link : https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    string str1, str2;

    cin >> str1;
    cin >> str2;

    // converting strings to lowercase.
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 == str2)
        cout << 0;
    else
        str1 > str2 ? cout << 1 : cout << -1;
}