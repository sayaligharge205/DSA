// Strings Rotations of Each Other
----------------GFG---------------------
--------------------brute-force solution--------------------------------------
Question: Check if s2 is rotation of s1.
Example:
s1 = "abcd"
s2 = "cdab"
Output → true

Idea--->
Rotate s1 one by one.
After each rotation, compare with s2.
If equal → return true.
----------------Code (Brute Force)----------------------------------------
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
Complexity
Time → O(n²)
Space → O(1)

❌ Not good for large input (10^5)

---------------------------Optimal solution-----------------------------------------
Key Idea : All rotations of a string exist inside (s1 + s1).
Steps
Check if lengths are equal.
Create temp = s1 + s1.
Check if s2 is substring of temp.

-------CODE---------------
bool areRotations(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        return true;
    else
        return false;
}

-------------------------LEETCODE------------------------
---------------------------------------------------------
Find the Index of the First Occurrence in a String
-->String | Substring Search | Built-in find()

Step 1: Check Length
If needle is longer than haystack,
it is impossible → return -1.

Step 2: Use Built-in find()
find() returns index if found.
Returns string::npos if not found.
So:
If found → return index
Else → return -1

-------------Code (Clean & Correct)--------------
class Solution {
public:
    int strStr(string haystack, string needle) {

        // If needle is longer, not possible
        if(haystack.length() < needle.length())
            return -1;

        int pos = haystack.find(needle);

        if(pos != string::npos)
            return pos;
        else
            return -1;
    }
};

⏱ Complexity
Time → O(n)
Space → O(1)