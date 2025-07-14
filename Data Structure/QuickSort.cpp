#include <bits/stdc++.h>

using namespace std;

int partion(vector <int> &arr, int start, int end){

	int pivot = arr[start];
	int indecOfPivot = start;

	while(start <= end){

		if(arr[start] <= pivot){
			start++;
		}
		else if (arr[end] > pivot){
			end--;
		}

		else{
			swap(arr[start] , arr[end]);
		}
	}
	swap(arr[end], arr[indecOfPivot]);

	return end;
}



void quickSort(vector <int> &arr, int start, int end){

	if(start >= end) return;

	int index = partion(arr, start, end);
	quickSort(arr, start, index - 1);
	quickSort(arr, index + 1, end);
}


int main(){

	int n = 6;
	vector <int> arr = {2, 10, 4, 1, 0 ,5};

	//bubbleSort(arr, n);
	//SelectionSort(arr, n);
	// insertionSort(arr, n);

	int start = 0, end = n - 1;
	quickSort(arr, start, end);

	for (int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}


	return 0;
}