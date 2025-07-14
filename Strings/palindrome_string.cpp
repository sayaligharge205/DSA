#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello world";


    string rev = str;
    reverse(rev.begin(), rev.end());

    cout << (str == rev ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
