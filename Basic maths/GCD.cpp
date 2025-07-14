#include<bits/stdc++.h>
using namespace std;
int main()
{




}



int GCD(int A, int B)
{
	
	// my GCD always lies from 1 to min(a, b)
	int x = min(A, B); // x stores the min value among A & B
	
	int ans; //ans stores the largest no. which divides both A & B

	for (int i = 1; i <= x; i++){
		if (A % i == 0 && B % i == 0){
			ans = i;
		}
	}

	return ans;
}




int GCD(int a, int b){

	//base case
	if (b == 0)
		return a;

	//recursive
	return GCD(b, a % b);

}

//Euclidean Algorithm to find GCD of two numbers