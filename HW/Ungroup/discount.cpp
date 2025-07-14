// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT


#include <bits/stdc++.h>
using namespace std;

int discount(vector<int> &arr, int x, int y)
{
    int total = 0; 

    for (auto i : arr)
    {
        total = total + i;
    }

    int totalWithDiscount = x;
    for (auto i : arr)
    {
        totalWithDiscount = totalWithDiscount + max(i - y, 0);
    }

    if (totalWithDiscount < total)
        cout << "COUPON";

    else
        cout << "NO COUPON";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int result = discount(arr, x, y);
    }
    return 0;
}