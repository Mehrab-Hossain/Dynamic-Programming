//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"

const int mx = 5e3;
int dp[mx+5][mx+5];
int a[mx+5];
int sum[mx+5];
int n;

int solve(int i, int j){
	if( i == j) return a[i];
	if(dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = max(a[i] + (sum[j]-sum[i]) - solve(i+1,j) , a[j] + (sum[j-1]-sum[i-1]) - solve(i, j-1));
	
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    memset(dp, -1, sizeof dp);

    cin >> n;

    for( int i = 1; i <= n; i++) cin >> a[i];
    for( int i = 1; i <= n; i++){
    	sum[i] = sum[i-1] + a[i];
    }

    cout << solve(1, n) <<endl;
    
   
    


    
    
}
///ALHAMDULILLAH//
