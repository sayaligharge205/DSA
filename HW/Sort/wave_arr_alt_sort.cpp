// https://www.geeksforgeeks.org/problems/wave-array-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include <bits/stdc++.h> 
using namespace std;

void convertToWave(int n, vector<int>& arr) {
    // Traverse all even indexed elements
    for (int i = 0; i < n - 1; i += 2) {
        // Swap arr[i] and arr[i + 1]
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    cin >> n;  // Input size of array
    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Convert array to wave-like array
    convertToWave(n, arr);

    // Output the wave-like array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}