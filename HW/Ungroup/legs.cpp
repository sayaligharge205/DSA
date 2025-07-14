// https://codeforces.com/problemset/status?my=on

#include<bits/stdc++.h> 

using namespace std;

void legsCount(int n)
{
    int cows = n / 4;
    int remainLegs = n % 4;

    int chicken = (remainLegs + 1) / 2;

    cout << cows + chicken <<"\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        legsCount(n);

    }


    return 0; 
}


// int min_animals = n / 4 + (n % 4) / 2;   in one line we can do this also 