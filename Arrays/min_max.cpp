#include <bits/stdc++.h>

using namespace std;
 


void findMinMax(vector<int> &arr) {
    int smallest = INT_MAX; // Initialize with max possible value
    int largest = INT_MIN;  // Initialize with min possible value

    for (int num : arr) {
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
}



int smallest = *min_element(arr.begin(), arr.end());
int largest = *max_element(arr.begin(), arr.end());


int main() {
    vector<int> arr = {3, 1, 7, 9, 2, 5}; 
    findMinMax(arr);
    return 0;
}
