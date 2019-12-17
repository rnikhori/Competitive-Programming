// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
int power(int n,int p)
{
	if(p==0)
		return 1;
	int powern1= power(n,p/2);
	int powersquare = powern1*powern1;
	return p&1? n*powersquare:powersquare;

		
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
        
    		cout<<power(2,10)<<endl;
        cout<<endl;
        }
    return 0;
}