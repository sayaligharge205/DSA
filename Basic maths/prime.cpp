#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
		
		int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0){

            cnt++;
        }
    }
    if (cnt == 2) return true;
    
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

void sqrtApproach(int n){
    int cnt = 0;

    //divisors always comes in pair (x, y)

    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            int x = i;
            int y = n / i;

            cnt++;

            if (x != y){
                cnt++;
            }
        }
    }

    if (cnt == 2){
        cout << "It is a Prime Number\n";
    }else{
        cout << "It it not a Prime Number\n";
    }
}

int main(){
    
    int n;
    cin >> n;

    //second appraoch - 1 to sqrt(n)
    sqrtApproach(n);

}