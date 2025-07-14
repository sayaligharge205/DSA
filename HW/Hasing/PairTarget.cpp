#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int target) {
        // Code here

        map <int, int> hash;
        int count = 0;

        for (int it: arr)
        {

            if(hash.find(target - it) != hash.end())
            {
                count = count + hash[target - it];
            }

            hash[it]++;
        }

        return count;
    }

int main()
{
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;

    int result = countPairs(arr, target);
    cout << "Number of pairs with sum " << target << " is: " << result << endl;


    return 0;
}