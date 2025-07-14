#include <bits/stdc++.h>
using namespace std;

    int minSubArrayLen(int target, vector<int>& nums) {
        
        int length = INT_MAX;

        for (int i=0; i<nums.size(); i++)
        {
            int sum = 0;

            for(int j= i; j<nums.size(); j++)
            {
                sum = sum + nums[j];

                if (sum >= target)
                {
                    int lengthofsubarray = j - i + 1;
                    length = min(lengthofsubarray, length);
                }
            }
        }
        return (length == INT_MAX) ? 0 : length;
    }



class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int minlen = INT_MAX;

        while (right < nums.size()) {
            sum = sum + nums[right];
            right++;

            while(sum >= target)
            {
                minlen = min(minlen, right - left);
                sum = sum - nums[left];
                left++;
            }
        }
        return (minlen == INT_MAX) ? 0 : minlen;
    }
};