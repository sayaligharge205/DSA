// https://codeforces.com/problemset/problem/1742/A

#include <bits/stdc++.h>
using namespace std;

void checkSum(int a ,int b, int c)
{
    if (a == b + c || b == a + c || c == a + b)
    {
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
}
int main()
{
    int t;
    cin >> t; 

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

    checkSum(a, b, c);
    
    }
    
    return 0;
}