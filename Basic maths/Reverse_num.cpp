#include <bits/stdc++.h>

using namespace std;

int main(){
int num, rev = 0;
num = 123;

	while (num > 0 ){
		
		rev =  rev * 10 + num % 10;
		num = num / 10;
	}
	cout << rev << " ";  

	return 0;
}
