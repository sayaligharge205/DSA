#include <bits/stdc++.h>

using namespace std;



int main(){

int n1 = 5;
int n2 = 10;

// n1 = n1 + n2;
// n2 = n1 - n2;
// n1 = n1 - n2;

n1 = n1 ^ n2;
n2 = n1 ^ n2;
n1 = n1 ^ n2;


cout << "n1: "<< n1;
cout << "n2: "<< n2; 

	return 0;
}

