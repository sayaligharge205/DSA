#include <bits/stdc++.h>
using namespace std;

int main(){

	string str = "HELLO WORLD I AM HP";
	string words;
	stringstream ss(str);

	int cnt = 0;
	while( ss >> words)
		cnt++;

	cout << cnt << " ";
	return 0;
}