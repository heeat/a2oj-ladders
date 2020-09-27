// Codeforces Link : https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    int num = 0, seq = 0, count = 1, all_sum = 0;
    cin >> num;

    vector<int> vc;

    for (int i = 0; i < num; i++)
    {
        // taking stream of values and pushing them into a vector
        cin >> seq;
        vc.push_back(seq);
    }
    //sorting vector in descending order
    sort(vc.begin(), vc.end(), greater<int>());

    //getting the first value which is the highest of all
    int min_sum = vc[0];

    for (int i = 1; i < vc.size(); i++)
    {
        // iterators
        auto it = (vc.begin() + i);
        auto it2 = vc.end();

        // accumulate will to sum of all the numbers in the range we specify
        all_sum = accumulate(it, it2, 0);

        // if value we have is already higher than the sum of remaining values we have an answer
        // since it willl be atleast 1 coin i initialised count with 1
        if (min_sum > all_sum)
        {
            break;
        }
        else
        {
            // if value is less we add the present value and check again in the next iteration
            // so now the coins have increased so count++
            min_sum += vc[i];
            count++;
        }
    }
    cout << count;
}