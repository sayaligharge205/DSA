#include <bits/stdc++.h>

using namespace std;



int main(){

	string str1 = "HELLO";
	string str2 = "";


	// for (int i = str1.length() - 1; i >= 0 ; i--){
		
	// 	str2 += str1[i];
	// }
	// cout << str2;



	reverse(str1.begin(), str1.end());
	cout << str1;
	return 0;
}
