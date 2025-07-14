#include <bits/stdc++.h>

using namespace std;

void PrintN(int current, int N){

	//Base case

	if(current > N) return ;

	//print

	cout << current << " ";
	// recursive
	PrintN(current + 1, N);

}

int main(){
	int N;
	cout << "Enter Nth : ";
	cin >> N;

	PrintN(1, N);

	cout << "\n";

	return 0;
}