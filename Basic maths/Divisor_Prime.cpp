#include <bits/stdc++.h>

using namespace std;

int isprime(int num){

	int cnt = 0;

	for(int i = 1; i<sqrt(num); i++){

		if(num % i == 0){
			int x = i;
			int y = num / i;
			//cout << x << " ";

			if(x != y) //cout << y << " ";
			cnt++;

		}
	}
	return cnt;
}

int main(){

	int num = 5;

	int prime = isprime(num);
	if (prime <= 2){
		cout << "Prime";
	}else {
		cout << "Not Prime";
	}


	return 0;
}

