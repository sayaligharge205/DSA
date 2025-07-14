#include<bits/stdc++.h>

using namespace std;

vector <int> sortedArray(vector < int > a, vector < int > b) {
    // Write your code here

    set <int> st;
    int n = a.size();
    int m = b.size();

    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(b[i]);
    }

    for(auto it : st)
    {
        cout<< it <<" ";
    }
}

int main()
{
    vector <int> a = {1, 2, 3, 4, 6};
    vector <int> b = {2, 3, 5};

    sortedArray(a, b);

    return 0;
}   