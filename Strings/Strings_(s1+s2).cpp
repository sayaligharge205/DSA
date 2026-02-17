// Strings Rotations of Each Other
-------------------------------------
brute-force solution
--------------------------------------
Question: Check if s2 is rotation of s1.
Example:
s1 = "abcd"
s2 = "cdab"
Output → true


----------------------------------------
💻 Code (Brute Force)
----------------------------------------
bool areRotations(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;

    int n = s1.length();

    for(int i = 0; i < n; i++) {
        // rotate left by 1
        s1 = s1.substr(1) + s1[0];

        if(s1 == s2)
            return true;
    }

    return false;
}

⏱ Complexity
Time → O(n²)
Space → O(1)

❌ Not good for large input (10^5)


--------------------------------------
Optimal solution
-----------------------------------------
bool areRotations(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        return true;
    else
        return false;
}
