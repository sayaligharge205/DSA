#include<bits/stdc++.h>
using namespace std;

vector <int> MajorElement(vector<int> &arr)
{
    int n = arr.size() /3;

    map <int, int> hash;
    vector <int> result;
    for (auto it: arr){
        hash[it]++;
    }

    for (auto it: hash)
    {
        if(it.second > n)
        {
            result.push_back(it.first);
        }
    }
    return result;
}

int main()
{
    vector <int> arr = {3, 2, 3};
    vector <int> result = MajorElement(arr);
    
    for(auto it: result)
    {
        cout << it <<" ";
    }
    return 0;
}