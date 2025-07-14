#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int BlankSpcae(vector<int> &arr, int n)
    {
        int cnt = 0;
        int maxCnt = 0;
        
        for(int i =0; i<n; i++)
        {
            if(arr[i]==0)
            {
                cnt++;
                maxCnt = max(cnt, maxCnt);
            }
            else
            {
                cnt = 0;
            }
        }
        return maxCnt;
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector <int> arr(n);
        for (int i=0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        cout << BlankSpcae(arr, n);
    }
    return 0;
}
