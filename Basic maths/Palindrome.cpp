#include <bits/stdc++.h>

using namespace std;

int main()
{	

int temp = 121;
int num = 121;

	int rev = 0;

	while (num > 0){

		rev = rev * 10 + num % 10;
		num = num /10;
	}
	cout << rev << " ";


	if(temp == rev)
		cout << "Given Numbber is Palindrome";
	else cout << "Not Palindrome" ;

	return 0;
}