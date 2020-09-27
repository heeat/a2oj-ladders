// Codeforces Link : https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int numofwords = 0;
    string word;

    cin >> numofwords;
    for (int i = 0; i < numofwords; i++)
    {
        cin >> word;
        int len = word.length();

        //check if word's length is more than 10.
        if (word.length() > 10)
        {
            cout << word[0] << len - 2 << word[len - 1] << "\n";
        }
        else
        {
            cout << word << "\n";
        }
    }
}