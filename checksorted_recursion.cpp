// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n,int si)
{
// 		int i=0;
// 		if(i==n && isSorted(arr,i)==true)
// 			return true;

// 		int var1 = arr[i];
// 		int var2 = arr[i+1];
// 		if(var1<var2)
// 			return true;
// 		else 
// 			return false;
// for(i=0;i<n;i++)
// 	{
// 		if(isSorted(arr,i))
// 			return true;
// 		else
// 			return false;
	if(si==n-1)
	{
		return true;
	}

	if(arr[si]>arr[si+1])
		return false;
	int rest_of_the_array = isSorted(arr,n,si+1);
	return rest_of_the_array;


	}

	int linearsearch(int arr[],int n,int si,int k)
	{
		if(si==n)
			return -1;
		if(arr[si]==k)
			return si;
		int res =linearsearch(arr,n,si+1,k);
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
    	int arr[]={1,2,7,4,5};
    	int n=5;

    	// cout<<isSorted(arr,5,0);
    	cout<<linearsearch(arr,5,0,5);
        

        cout<<endl;
        }
    return 0;
}