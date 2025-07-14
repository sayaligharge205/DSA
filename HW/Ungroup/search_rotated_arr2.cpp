// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return true;
            }

            // Handle duplicates: If left, mid, and right are the same, we can't determine which side is sorted
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            // Left part is sorted
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // Right part is sorted
            else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return false; // Target not found
    }
};

int main()
{
    int n;
    cin >> n; // Number of elements in the array

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i]; // Input the array elements
    }

    int target;
    cin >> target; // Input the target value

    Solution solution;
    bool result = solution.search(nums, target);

    // Output result (1 for true, 0 for false)
    cout << (result ? "true" : "false") << "\n";

    return 0;
}