#include <bits/stdc++.h>

using namespace std;

void PrintN(int N, int current){

	//Base case

	if(N < 1) return ;

	//print

	cout << N << " ";
	// recursive
	PrintN(N-1, current);

}

int main(){
	int N;
	cout << "Enter Nth : ";
	cin >> N;

	PrintN(N, 1);

	cout << "\n";

	return 0;
}