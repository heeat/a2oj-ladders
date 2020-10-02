// Codeforces Link : https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, finalstr, ultimatestr;
    int count = 0;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        // Check for WUB, if found increment the 'i' to check for next letter after WUB.
        if ((str[i] == 'W') && (str[i + 1] == 'U') && (str[i + 2] == 'B'))
        {
            i += 2;
            count = 0;
        }

        // We use count becuase we need spaces between words.
        // if it is a single word we need not have any space.

        else
        {
            // when first time it execution enters else string would be empty so we add in value without space and increment count.
            if (finalstr.empty())
            {
                finalstr += str[i];
                count++;
            }
            // Count will be zero only when it goes to if condition i.e there is a gap between words so we add space first and then the letters.
            else if (count == 0)
            {

                finalstr += " ";
                finalstr += str[i];
                count++;
            }
            // this is used to add letters to a word without spaces.
            else
            {
                finalstr += str[i];
            }
        }
    }

    cout << finalstr;
}