#include <bits/stdc++.h>
using namespace std;

bool CheckPair(vector<int> &arr)
{
    int n = arr.size();
    map<int, pair<int, int>> hash;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];

            if (hash.find(sum) != hash.end())
            {
                pair<int, int> index = hash[sum];

                cout << "Pairs found: (" << arr[index.first] << ", " << arr[index.second] << ") and ("
                     << arr[i] << ", " << arr[j] << ")\n";
            return true;
            }
            // make pair
            hash[sum] = {i, j};
        }
    }
    return false;
}

int main()
{
    vector<int> arr1 = {3, 4, 7, 1, 2, 9, 8};
    vector<int> arr2 = {65, 30, 7, 90, 1, 9, 8};

    cout << (CheckPair(arr1) ? "true" : "false") << endl;
    cout << (CheckPair(arr2) ? "true" : "false") << endl;
    return 0;
}