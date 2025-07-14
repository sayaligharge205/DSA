//User function Template for C++
//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


multimap<int,int> multimapInsert(int arr[],int n);
void multimapDisplay(multimap<int,int>mp);
void multimapErase(multimap<int,int>&mp,int x);



multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   //Insert arr[i] as key and i as value in the multimap 
    for(int i=0; i<n; i++){
        
    mp.insert(make_pair(arr[i],i));
    }
    return mp;
    
}


void multimapDisplay(multimap<int,int>mp)
{
    //Print the keys and value pairs in new line
    for (auto i : mp) {
        cout << i.first << " " << i.second << endl; 
    }
}


void multimapErase(multimap<int,int>&mp,int x)
{
    if(mp.find(x)!= mp.end())
    {
        mp.erase(x);
        cout<<"erased "<<x;
    }
    else
    {
        cout<<"not found";
    }
    cout << endl;
}