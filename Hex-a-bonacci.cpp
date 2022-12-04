#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl '\n'
const int mx=10005;
const int mod=10000007;
int dp[mx];
int a, b, c, d, e, f;
long long int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n] !=-1)
    {
        return dp[n];
    }else{

    long long int len =fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);

    len%=mod;
    return  dp[n]= len;
    }
}

 int main()
 {
optimization();



     int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {

              memset(dp,-1,sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;



 }
