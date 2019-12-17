// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int unique(int arr[],int n)
{
	int xor1 = arr[0];
	for (int i = 1; i < n; ++i)
	{
		xor1 = xor1^arr[i];
	}
	int var = xor1;

	while(true)
	{
		if(xor1==0)
		{
			return;
		}
		

	}

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