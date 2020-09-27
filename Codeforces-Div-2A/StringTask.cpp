// Codeforces Link : : https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    string str, finalstr;
    cin >> str;

    // storing all values in char array
    char vowels[] = {'a', 'e', 'i', 'o', 'y', 'u', 'A', 'E', 'I', 'O', 'U', 'Y'};

    for (auto x : str)
    {
        // finding if letter is a vowel or not
        bool val = find(begin(vowels), end(vowels), x) != end(vowels);

        if (!val)
        {
            finalstr.push_back('.');
            // converting to lowercase using tolower()
            finalstr.push_back(tolower(x));
        }
    }
    cout << finalstr << "\n";
}