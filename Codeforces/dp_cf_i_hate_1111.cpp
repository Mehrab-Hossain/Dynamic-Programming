//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int 				long long int
#define endl              "\n"
const int mx = 1e4;
int dp[2000];

int solve( int sum){
	if(sum == 0 ) return 1;
	if( sum < 0) return 0;

	if(dp[sum] != -1) return dp[sum];

	return dp[sum] = solve(sum-11) + solve(sum - 111); 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int t;
    t = 1;
    cin >> t;
    memset(dp, -1, sizeof dp);
    while(t--) {
        int n;
        cin >> n;
       
        if( n < 2000){
        	if(solve(n)) cout <<"YES"<<endl;
        	else cout <<"NO"<<endl;
        }else cout <<"YES"<<endl;
        
    }
   
    


    
    
}
///ALHAMDULILLAH//
