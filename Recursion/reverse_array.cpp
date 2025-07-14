#include <bits/stdc++.h>

using namespace std;

void RecursiveSortBubble(int arr[], int n){

	// base case - one element
	if(n == 1) return;

	// Unsorted array - last element get sorted
	for (int i = 0; i < n-1; i++){
		if(arr[i] > arr[i + 1]){
			swap(arr[i], arr[i+1]);
		}
	}
	// recurvise call for remaining
	RecursiveSortBubble(arr, n-1);
}


int main(){
	int arr[] = {3, 1, 4, 2, 0, 7};
	int n = 6;
	cout << "Before Sort\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " ;
	}

	cout << "\n";

	RecursiveSortBubble(arr, n);

	cout << "After Sort\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " ;
	}

	cout << "\n";

	return 0;
}