// https://www.geeksforgeeks.org/problems/alternative-sorting1311/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArr(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    vector<int> ans(n);

    int i = 0;
    int j = arr.size() - 1;

    for (int k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            ans[k] = arr[j];
            j--;
        }
        else
        {
            ans[k] = arr[i];
            i++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call the rearrange function
    vector<int> result = rearrangeArr(arr, n);

    // Output the rearranged array
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}