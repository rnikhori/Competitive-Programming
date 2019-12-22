// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n) 
{ 
     
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
} 
int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

    	int n;
    	cin>>n;
    	int arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>arr[i];
    	}

    	int k = mostFrequent(arr,n);
    	cout<<k<<endl;
    	int count =0;
    	for(int i=1;i<n;i++)
    	{
    		
    		if(arr[i-1]!=k)
    			{
    				arr[i-1]==k;
    				count++;

    			}

    			if(arr[i+1]!=k)
    			{
    				arr[i+1]=k;
    				count++;
    			}
    		
    	}

       cout<<count;
        cout<<endl;
        }
    return 0;
}