//https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FAVOURITENUM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A;
        cin >> A;

        //  Alice likes even and multiper of 7
        if (A % 7 == 0 && A % 2 == 0) {
            cout << "Alice" << endl;
        }
        //  Bob likes the odd and multiper of 9
        else if (A % 9 == 0 && A % 2 != 0) {
            cout << "Bob" << endl;
        }
        // If neither Alice nor Bob likes the number, Charlie takes it
        else {
            cout << "Charlie" << endl;
        }
    }

    return 0;
}