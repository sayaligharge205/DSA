// - **Example**:
    
//     Find divisors of 36.
    
//     **Steps**:
    
//     1. `36 % 1 = 0` → 1 and 36 are divisors.
//     2. `36 % 2 = 0` → 2 and 18 are divisors.
//     3. `36 % 3 = 0` → 3 and 12 are divisors.
//     4. `36 % 4 = 0` → 4 and 9 are divisors.
//     5. `36 % 6 = 0` → 6 is a divisor.



#include <iostream>
using namespace std;

void findDivisors(int n) {
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    findDivisors(n);

    return 0;
}


// sqrt approach for divisor 

#include<bits/stdc++.h>
using namespace std;

void sqrtApproach(int a){
	for (int i = 1; i <= sqrt(a); i++){
        if (a % i == 0){
            int x = i;
            int y = (a / i);

            cout << x << " ";

            if(x != y)
                cout << y << " ";

        }
    }
}

int main(){

    int a;
    cin >> a;
    
    sqrtApproach(a);

}