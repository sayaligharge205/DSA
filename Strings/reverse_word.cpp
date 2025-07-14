#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "HELLO WORLD";
    stringstream ss(str);
    string word;

    vector<string> words; // Store words as strings

    while (ss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end()); // Reverse the order of words

    for (auto it : words) {
        cout << it << " "; // Print words correctly
    }

    return 0;
}
