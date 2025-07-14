#include <bits/stdc++.h>

using namespace std;
 
int Missing(vector <int> &arr, int n ){
	
	int xor1 = 0 ;
	int xor2 = 0;

	for (int i = 1; i <= n; i++)
	{
		xor1 = xor1 ^ i;
	}

	for (auto it: arr){
		xor2 = xor2 ^ it;
	}

	return xor1 ^ xor2;

}


int main(){


	vector <int> arr = {1, 2, 4, 5 ,6};
	int n = arr.size() + 1;

	cout << Missing(arr, n);
	return 0;

}