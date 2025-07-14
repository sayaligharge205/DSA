#include<bits/stdc++.h>
using namespace std;

vector <int> TopK (vector <int> &arr, int k)
{
    map <int, int> freq;

    for(auto it: arr)
    {
        freq[it]++;
    }
    vector <int> UniqueElements;

    for (auto it: freq)
    {
        UniqueElements.push_back(it.first);
    }

    sort(UniqueElements.begin(), UniqueElements.end(), [&freq, &arr] (int a, int b){ // lambada function 

        if (freq[a] == freq[b]) {
            // If frequencies are the same, compare by original order (first occurrence)
            return find(arr.begin(), arr.end(), a) < find(arr.begin(), arr.end(), b);
        }
        return freq[a] > freq[b];
    }); 

    vector <int> result ;

    for (int i = 0; i < k; i++)
    {
        result.push_back(UniqueElements[i]);
    }
    return result;
}

int main()
{

    vector <int> arr = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector <int> result = TopK(arr, k);

    for (auto it: result)
    {
        cout << it << " ";
    }
    return 0;

}