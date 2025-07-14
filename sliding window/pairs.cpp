int countpairs(vector<int>& arr, int target) {
    // Sort the array to use two-pointer technique
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    int count = 0;

    
    while (left < right) {
       
        if (arr[left] + arr[right] < target) {
            
            count += (right - left);
            left++; 
        } else {
            right--;  
        }
    }

    return count;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countpairs(arr, target) << endl;
    return 0;
}