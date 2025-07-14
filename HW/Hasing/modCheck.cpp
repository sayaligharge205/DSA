#include<bits/stdc++.h>
using namespace std;
int printPairs(vector<int> &arr, int k) {
        // Your code goes here.
        
    set <int> Hashset(arr.begin(), arr.end());

    // for (auto i : arr)
    // {
    //     Hashset.insert(i);
        
    // }  
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (auto j : Hashset)
        {
            if (arr[i] % j == k){
            count ++;

            }
        }
    }
    return count;
}
int main()
{
    vector <int> arr = {2, 3, 5, 4, 7};
    int k = 3;

    int result = printPairs(arr, k);
    cout << result <<"\n";
    return 0;
}