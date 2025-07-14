#include <bits/stdc++.h>

using namespace std;



int main(){


	vector <int> arr1 = {1, 5, 3, 3, 5};
	set <int> st;

	st.insert(arr1.begin(), arr1.end());

	for (auto it : st){
		cout << it << " ";
	}
	

	return 0;

}