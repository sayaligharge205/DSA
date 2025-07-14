#include <bits/stdc++.h>

using namespace std;

void RecursiveStringSort(string &s, int start, int end){

	// base case - if st and end comes on same element or passes
	if(start >= end) return;

	// recurive

	swap(s[start], s[end]);

	RecursiveStringSort(s, start + 1, end - 1);
}


int main(){
	string s = "HELLO";
	int n = 6;
	cout << "Before Sort\n";
	cout << s << " ";
	cout << "\n";

	RecursiveStringSort(s, 0, s.length()-1);

	cout << "After Sort\n";
	
	cout <<  s << " " ;
	

	cout << "\n";

	return 0;
}