#include <bits/stdc++.h>

using namespace std;

int BinaraySearch(vector <int> &arr, int size, int target){

	int left = 0; 
	int right = size -1;

	while(left <= right ){

		int mid = (left + right) / 2;

		if(arr[mid] == target){
			return mid;
		}

		if (arr[mid] < target){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{


	int n = 5;
	int target = 2;
	vector <int> arr = {1, 2, 5, 8, 7};

	int ans = BinaraySearch(arr, n, target);

	if (ans != -1){ 
		cout << "Element found at index: "<< ans ;
	}

	return 0;

}