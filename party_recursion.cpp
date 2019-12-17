// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;

int permutation(int n)
{
	if(n==1|| n==2)
		return n;
	return permutation(n-1)+((n-1)*permutation(n-2));

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

        cout<<permutation(40);

        cout<<endl;
        }
    return 0;
}