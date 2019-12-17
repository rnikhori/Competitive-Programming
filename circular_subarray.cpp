// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int kadanes_algo(int arr[],int n)
{
	int maxsum = arr[0];
	int currmax = arr[0];
	int minsum = arr[0];
	int currmin = arr[0];
	int total = arr[0];
	for(int i =1;i<n;i++)
	{
		maxsum = max(currsum+arr[i],arr[i]);
		maxsum = max(currsum,maxsum);

		minsum = min(currsum+arr[i],arr[i]);
		minsum= min(currsum,minsum);

		total +=arr[i];

	}

	return maxsum>0 ? max(maxsum,total-minsum):maxsum;//checking for all the negative values 
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
        

        cout<<endl;
        }
    return 0;
}