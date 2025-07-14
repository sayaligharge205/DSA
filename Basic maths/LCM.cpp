//   GCD(a, b) <= min(a, b)

//    a x b = LCM(a, b) * GCD (a, b)

//    LCM(a, b) = (a x b) / GCD(a, b)

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a = 12, b = 15;
    int LCM = lcm(a, b);
    cout << "LCM of a & b is: " << LCM;
    return 0;
}