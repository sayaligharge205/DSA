// https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>

using namespace std;

void sortColor(vector<int> &arr, int size)
{

    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            // arr[mid]== 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int nums;
    cin >> nums;

    vector<int> arr(nums);
    for (int i = 0; i < nums; i++)
    {
        cin >> arr[i];
    }
    sortColor(arr, nums);
    for (int i = 0; i < nums; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}