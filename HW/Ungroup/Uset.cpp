//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void insert(unordered_set<int> &s,int x);

void erase(unordered_set<int> &s,int x);
int size(unordered_set<int> &s);
int find(unordered_set<int> &s,int x);


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		unordered_set<int> s;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				insert(s,x);
			}
		
			if(c=='b')
			{
				int x;
				cin>>x;
				erase(s,x);
			}
			if(c=='c')
			{
				int x;
				cin>>x;
				cout<<find(s,x)<<" ";
			}if(c=='d')
                       cout<<size(s)<<" ";
		
		}
cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


void insert(unordered_set<int> &s, int x) {
    s.insert(x); // Use the insert function of the unordered_set
}

/* Erases an element x from the unordered set s */
void erase(unordered_set<int> &s, int x) {
    s.erase(x); // Use the erase function of the unordered_set
}

/* Returns the size of the unordered set s */
int size(unordered_set<int> &s) {
    return s.size(); // Use the size function of the unordered_set
}

/* Returns 1 if the element x is present in unordered set s else returns -1 */
int find(unordered_set<int> &s, int x) {
    return (s.find(x) != s.end()) ? 1 : -1; // Check for presence of x
}