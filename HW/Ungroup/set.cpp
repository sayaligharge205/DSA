/*inserts an element x to the set s */
#include <bits/stdc++.h>
using namespace std;

void insert(set<int> &s,int x)
{
    //Your code here
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    //Your code here
    for(auto it :s){
        cout << it <<" ";
    }
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    //Your code here
    s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    //Your code here
    if (s.find(x) != s.end())
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

/*returns the size of the set s */
int size(set<int> &s)
{
   //Your code here
   return s.size();
}