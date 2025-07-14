#include <bits/stdc++.h>
using namespace std;

int main(){


string str = "HELLO WORLD";


map<char, int> freq;

for(auto it : str){
	freq[it]++;
}


for(auto it : freq)
{
	if(it.second > 1){
		cout << it.first << ":" << it.second << " ";
	}
}
return 0;
}