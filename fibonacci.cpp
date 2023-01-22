#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dp[10000];
int fibo(int n)
{
         if(n==0)
        return 0;
        if(n==1)
        return 1;

    if(dp[n]!=-1)
            return dp[n];
   return  dp[n]=(fibo(n-1)+fibo(n-2));




}

 int main()
 {

     optimization();

     memset(dp, -1, sizeof(dp));

     int n;
     cin>>n;
     cout<<fibo(n);




     return 0;


 }
