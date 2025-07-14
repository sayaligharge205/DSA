#include <bits/stdc++.h>

using namespace std;

vector <int> resultarr(vector <int> &arr1, vector <int> &arr2){

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	vector <int> result;
	int i = 0, j = 0;
	while(i < arr1.size() && j < arr2.size()){
		if(arr1[i] == arr2[j]){
			result.push_back(arr1[i]);
			i++,j++;
		}
		else if(arr1[i] < arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return result;

}

int main(){


	vector <int> arr1 = {1, 5, 3};
	vector <int> arr2 = {5, 3, 4, 4, 1};

	vector <int> cnt = resultarr(arr1, arr2);

	for (auto it : cnt){
		cout << it << " ";
	}
 

	return 0;

}