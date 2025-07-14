// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND

#include<bits/stdc++.h>
using namespace std;


int largest_seclargest(vector <int> &a, int n)
{

    int max1 = INT_MIN, max2 = INT_MIN;


    for (int i = 0; i < n; i++)
    {
        //find the max1 
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }
    return max1 + max2;
    
}


int main()
{

    int t;
    cin>>t;
while (t--)
{
    /* code */

    int n;
    cin>>n;

    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

    int result = largest_seclargest(a, n);
    cout<< result << "\n";

}
    
    return 0;
}