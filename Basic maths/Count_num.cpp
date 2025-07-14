#include <bits/stdc++.h>

using namespace std;

int main()
{	

	// string num = "154";

	// cout << num.length();





	int num = 1653;

	int cnt = 0;
	while(num != 0){
		num = num /10;
		 cnt++;
	}
	cout << cnt;

	return 0;
}