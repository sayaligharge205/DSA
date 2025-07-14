// https://leetcode.com/problems/search-in-rotated-sorted-array/
#include <bits/stdc++.h>

using namespace std;

int searchRotatedArray(int n, vector <int> &nums, int target)
{
    int left = 0;
    int right = nums.size()-1;
    int mid;


    while (left <= right)
    {
        mid = (left + right) /2; 

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[left] <= nums[mid])  // left part sorted
        {
            if(nums[left] <= target && target < nums[mid])
            {
                right = mid - 1;
            }
            else left = mid + 1;
        }
        else  // nums[mid] < nums[right]
        {
            if(nums[mid] < target && target <= nums[right])
            {
                left = mid + 1;
            }
            else right = mid - 1;
        }
    
    }
// not found
    return -1;      
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    int result = searchRotatedArray(n, nums, target);
    cout << result << "\n";
    return 0;
}



// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size()-1;
//         int mid;


//         while (left <= right)
//         {
//             mid = (left + right) /2; 

//             if (nums[mid] == target)
//             {
//                 return mid;
//             }
//             else if (nums[left] <= nums[mid])  // left part sorted
//             {
//                 if(nums[left] <= target && target < nums[mid])
//                 {
//                     right = mid - 1;
//                 }
//                 else left = mid + 1;
//             }
//             else  // nums[mid] < nums[right]
//             {
//                 if(nums[mid] < target && target <= nums[right])
//                 {
//                     left = mid + 1;
//                 }
//                 else right = mid - 1;
//             }
        
//         }
//         // not found
//         return -1;      

//     }
//     int main()
// {
//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     int target;
//     cin >> target;

//     int result = search(nums, target);
//     cout << result << "\n";
//     return 0;
// }
// };