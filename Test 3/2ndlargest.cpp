#include <bits/stdc++.h>
using namespace std;

// Optimized Function to Find Second Largest Element in One Loop
int secondLargest(vector<int> &arr) {
    int n = arr.size();
    
    int firstLargestElement = INT_MIN;
    int secondLargestElement = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargestElement) {
            secondLargestElement = firstLargestElement;
            firstLargestElement = arr[i];
        } 
        else if (arr[i] > secondLargestElement && arr[i] != firstLargestElement) {
            secondLargestElement = arr[i];
        }
    }
    
    // If no valid second largest exists
    if (secondLargestElement == INT_MIN) {
        return -1;
    }
    
    return secondLargestElement;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = secondLargest(arr);
    cout << ans << endl;

    return 0;
}
