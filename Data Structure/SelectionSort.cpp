#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[], int n){

	for(int i = 0; i < n - 1; i++){
		int min = i;

		for(int j = i+1; j < n; j++)
		{
			if(arr[j] < arr[min]){
				min = j;
			}
		}

		// int temp = arr[min];
		// arr[min] = arr[i];
		// arr[i] = temp;

		swap(arr[i], arr[min]);
	}
}

int main(){

	int n = 6;
	int arr[] = {2, 10, 4, 1, 0 ,5};

	//bubbleSort(arr, n);

	SelectionSort(arr, n);
	for (int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}


	return 0;
}