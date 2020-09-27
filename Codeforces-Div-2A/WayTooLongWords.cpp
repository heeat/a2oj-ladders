// Codeforces Link : https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    // getting number of words that will come as input
    int numofwords = 0;
    string word;

    cin >> numofwords;

    for (int i = 0; i < numofwords; i++)
    {
        cin >> word;

        //length of string
        int len = word.length();

        //check if word's length is more than 10.
        if (word.length() > 10)
        {
            cout << word[0] << len - 2 << word[len - 1] << "\n";
        }
        else
        {
            //if len not more than 10 then just print whatever is input
            cout << word << "\n";
        }
    }
}