// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
string arrange(string str)
{
	char ch = str[0];
	string ros = str.substr(1);
	string recursionresult = arrange(ros);
	if(ch=='x')
		return recursionresult + "x";
	else 
		recursionresult;
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
    	string str = "xxxabcxxefxxxdxx";
    	cout<<arrange(str);



        

        cout<<endl;
        }
    return 0;
}