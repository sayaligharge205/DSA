#include <bits/stdc++.h>
using namespace std;

bool dup(vector<int>& nums, int k) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j] && abs(i - j) <= k) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, k;
    cin >> n; 
    cin >> k; 
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << (dup(nums, k) ? "true" : "false") << endl;
    
    return 0;
}