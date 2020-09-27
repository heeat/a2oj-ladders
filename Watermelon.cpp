#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    //Problem is basically checking if number is even or odd.

    int num = 0; //always good to init with zero sometimes compiler will give garbage value which may give wrong answers.

    cin >> num;

    if (num & 1) 
        cout << "NO";
    else
        cout << "YES";
}
