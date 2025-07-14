// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SNDMAX


#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;

        int arr[3] = {a, b, c};

        // Sort the array
        sort(arr, arr + 3); //sort (start, end)

        // The second-maximum number will be the second element after sorting
        cout << arr[1] << endl;
    }

    return 0;
}