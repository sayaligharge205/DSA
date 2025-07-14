#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t; 

    while (t--) {
        int k;
        cin >> k; 

        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        int target = k - 2; // Subtract 2 from k to get the target
        int found = 0;

        for (int i = 0; i < k && found != 1; i++) {
            for (int j = 0; j < k; j++) {
                if (a[i] * a[j] == target) { // Check if n * m = target
                    cout << a[i] << " " << a[j] << endl;
                    found = 1;
                    break;
                }
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
