#include <bits/stdc++.h>

using namespace std;



int main(){
	int n = 10;
	int first = 0;
	int second = 1;
	int next;

	for (int i = 1; i < n; i++){
		cout << first << " ";

		next = first + second;
		first = second;
		second = next;
	}
	cout << endl;


// Method 2
	// int n;
    // cout << "Enter the number of terms: ";
    // cin >> n;

    // vector<int> fib(n);
    // fib[0] = 0, fib[1] = 1;

    // for (int i = 2; i < n; i++)
    //     fib[i] = fib[i - 1] + fib[i - 2];

    // cout << "Fibonacci series: ";
    // for (int num : fib)
    //     cout << num << " ";
    
    // cout << endl;


	return 0;
}

