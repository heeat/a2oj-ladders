// Codeforces Link : https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0, maxValIndex = 0, minValIndex = 0, inputVal = 0;
    vector<int> vc;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> inputVal;
        vc.push_back(inputVal);
    }

    // iterator to get max and min values.
    auto max = max_element(begin(vc), end(vc), less_equal<>());
    auto min = min_element(begin(vc), end(vc), less_equal<>());

    if ((vc.front() == *max) && (vc.back() = *min))
    {
        cout << 0;
        return 0;
    }

    maxValIndex = distance(vc.begin(), max);
    minValIndex = distance(vc.begin(), min);

    cout << "MAX VALUES ::: " << maxValIndex << "MIN VALUES ::: "<< minValIndex << "\n";

    cout << maxValIndex + (num - 1 - minValIndex) - (maxValIndex > minValIndex) ? 1 : 0;
}
