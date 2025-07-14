#include <bits/stdc++.h>
using namespace std;



int GCD(int a, int b){

	//base case
	if (b == 0)
		return a;

	//recursive
	return GCD(b, a % b);

}


int main(){


	int arr[] = {30, 12, 16, 4, 8};
	int size = 5;

	int ans = 0;

	for (int i = 0; i < size; i++){
		cout << "ans : " << ans << " ";
		ans = GCD(ans, arr[i]);
		cout << "Value of arr[i]: " << arr[i] << " ";
		cout << "GCD: " << ans <<"\n";
	}

	cout <<"\n";
	cout << "GCD of array: " << ans <<"\n";



	return 0;
}