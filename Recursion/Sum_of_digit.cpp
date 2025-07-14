#include <bits/stdc++.h>

using namespace std;

int SumOfDDigit(int n){

	//base
	if(n == 0) return 0; 

	//resurcive

	return (n %10) + SumOfDDigit(n/10);
}


int main(){
	int n;
	cin >> n;

	cout << SumOfDDigit(n);

	return 0;
}