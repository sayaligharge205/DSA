#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return GCD(b, a % b);
    }
int ArrayGCD(vector <int> &arr, int n)
{
  int gcd = arr[0]; 
    
    for (int i = 1; i < n; i++) {
        gcd = GCD(gcd, arr[i]); 
    }
    
    return gcd;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int n;
    cin >> n; 
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    cout << ArrayGCD(arr, n) << endl;
    
    return 0;

}
