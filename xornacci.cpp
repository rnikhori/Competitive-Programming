// Created by Ritesh tourist nikhoriya
#include <bits/stdc++.h>
using namespace std;
long long fibonacci(int a,int b,int n){

  long long f[n+2];
  long long i;


  f[0] = a;
  f[1] = b;

  for (i = 2; i <= n; i++)
  {

      f[i] = f[i-1]^f[i-2];
  }

  return f[n];
}
int main()
{

    int t;
    cin>>t;
    while(t--){
    		long long a ,b,n;
    	cin>>a>>b>>n;
    	cout<<fibonacci(a,b,n);


        cout<<endl;
        }
    return 0;
}
