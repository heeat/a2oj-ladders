// Codeforces Link : https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    string hlo;
    int valCheck = 0;

    cin >> hlo;

    for (int i = 0; i < hlo.size(); i++)
    {

        if (valCheck == 0 && hlo[i] == 'h')
        {
            valCheck++;
        }
        else if (valCheck == 1 && hlo[i] == 'e')
        {
            valCheck++;
        }

        else if (valCheck == 2 && hlo[i] == 'l')
        {
            valCheck++;
        }

        else if (valCheck == 3 && hlo[i] == 'l')
        {
            valCheck++;
        }

        else if (valCheck == 4 && hlo[i] == 'o')
        {
            valCheck++;
        }
    }
    if (valCheck == 5)
        cout << "YES";
    else
        cout << "NO";
}