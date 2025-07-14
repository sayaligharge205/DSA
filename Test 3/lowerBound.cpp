#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector <int> &arr, int n, int key)
{
    int left = 0;
    int right = n-1;
    int ans = n;
    
    while (left <= right)
    {
        int mid = (left + right) / 2;
        
        if (key <= arr[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    
    
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
        int n;
        cin >> n;
        
        int key;
        cin >> key;
        
        vector <int> arr(n);
        
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        cout << lowerBound(arr, n, key) <<"\n";
    return 0;
}
