#include <bits/stdc++.h>

using namespace std;
 
void cnt(vector <int> &arr, int n)
{
	int evenCnt = 0;
	int oddCnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] % 2 == 0){
			evenCnt++;
		}
		else{
			oddCnt++;
		}	
	}
	cout << evenCnt << " ";
	cout << oddCnt << " ";

}


int main(){


	vector <int> arr = {1, 2, 4, 5 ,6};
	int n = arr.size();

	cnt(arr, n);

	
	return 0;

}