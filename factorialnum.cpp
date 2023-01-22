#include<bits/stdc++.h>
using namespace std;
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int fact(int num)
{
    if(num==0)
        return 1;
    else{

        return num*fact(num-1);
    }
}

 int main()
 {
     int num;
     cin>>num;
     cout<<fact(num)<<endl;


     return 0;
 }
