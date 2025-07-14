// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include <bits/stdc++.h>

using namespace std;

void segregate0and1(vector<int> &arr) {
        int left = 0;
        int right = arr.size() -1;

        while (left < right)           
        {
            if (arr[left] == 0) left++;

            else if (arr[right] == 1) right--;

            else{ // left is 1 and right is 0

                swap(arr[left], arr[right]);
                left++;
                right--;
                
            }
        }
        
    }


int main()
{
    int  n;
    cin >> n;

    vector <int> arr(n);


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    segregate0and1(arr);

     for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    
    return 0;
}