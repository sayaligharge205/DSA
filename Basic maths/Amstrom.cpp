#include <bits/stdc++.h>

using namespace std;



int main(){

	int num = 153;
	int temp, sum = 0, rem ;
	temp = num;
	while (temp > 0){
		rem = temp % 10;
		sum = sum + rem * rem * rem;
		temp = temp / 10;
	}

	if (num == sum) {

		cout << " is Amrosteam";
	}
	else
		{
			cout << "Not Amrosteam";
		}

	return 0;

}