// Codeforces Link : https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 0, vcvaluex = 0, vcvaluey = 0, vcvaluez = 0;
    cin >> num;

    vector<signed> vcx;
    vector<signed> vcy;
    vector<signed> vcz;

    while (num--)
    {
        cin >> vcvaluex >> vcvaluey >> vcvaluez;
        vcx.push_back(vcvaluex);
        vcy.push_back(vcvaluey);
        vcz.push_back(vcvaluez);
    }

    // STL SUGAR :D
    // accumulate will add all values inside vector.
    int finalx = accumulate(vcx.begin(), vcx.end(), 0);
    int finaly = accumulate(vcy.begin(), vcy.end(), 0);
    int finalz = accumulate(vcz.begin(), vcz.end(), 0);

    if (finalx == 0 && finaly == 0 && finalz == 0)
        cout << "YES";
    else
        cout << "NO";
}