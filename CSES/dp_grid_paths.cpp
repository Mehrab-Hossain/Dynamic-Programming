//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"

const int mx = 1e3+5;
char grid[mx][mx];

int dp[mx][mx];
const int mod = 1e9+7;

int solve(int i, int j){
	if(i < 1 || j < 1) return 0;
	if(grid[i][j]=='*') return 0;
	if(i==1 && j == 1) return 1;

	if(dp[i][j]!=0) return dp[i][j];

	int sum = 0;

	if(i-1 >=1 ){
		sum = solve(i-1,j);
		sum %= mod;
	}
	if(j-1>=1){
		sum = sum + solve(i,j-1)%mod;
		sum %= mod;
	}
	return dp[i][j] = sum;

}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n;
    cin >> n;
    for( int i = 1; i <= n; i++){
    	for( int j = 1; j <= n; j++){
    		cin >> grid[i][j];
    	}
    }

    // cout << solve(n,n) <<endl;

    dp[1][1] = 1;

    for( int i = 1;i <= n; i++){
    	for( int j = 1; j <= n; j++){
    		if(grid[i][j]=='.'){
    			if(i > 1){
    				dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
    			}
    			if( j > 1){
    				dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod;
    			}
    		}else dp[i][j] = 0;
    	}
    }
    cout << dp[n][n] <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
