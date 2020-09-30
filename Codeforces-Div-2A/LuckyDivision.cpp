// Codeforces Link : https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    int num = 0, count = 0;
    cin >> num;

    string finalVal = to_string(num);

    // Check if all values in input are 4 & 7.
    for (auto x : finalVal)
    {
        if (x == '4' || x == '7')
            count++;
    }

    // if all values in input are 4 & 7 count would be same as length of input and we have answer.
    // if that fails for like number : 799 we have other checks like % with 4,7,47.

    if (count == finalVal.size() || num % 4 == 0 || num % 7 == 0 || num % 47 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}