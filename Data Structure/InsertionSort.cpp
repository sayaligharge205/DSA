#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n){
int key;
int j;
	for(int i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;


		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}


int main(){

	int n = 6;
	int arr[] = {2, 10, 4, 1, 0 ,5};

	//bubbleSort(arr, n);
	//SelectionSort(arr, n);
	insertionSort(arr, n);
	for (int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}


	return 0;
}