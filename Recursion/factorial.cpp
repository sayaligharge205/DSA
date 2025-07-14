#include <bits/stdc++.h>

using namespace std;

int Fact(int n){

	//base 0! == 1
	if(n == 0) return 1; 

	//resurcive

	return n * Fact(n-1);
}


int main(){
	int n;
	cin >> n;

	cout << Fact(n);

	return 0;
}