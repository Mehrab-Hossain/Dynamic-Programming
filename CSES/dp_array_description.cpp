//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"
const int mx = 1e5;
int dp[mx+5][105];
int a[mx+5];
const int mod = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n, x;
    cin >> n >> x;

    for( int i = 1; i <= n; i++) cin >> a[i];

    if(a[1]) dp[1][a[1]] = 1;
    else{
    	for( int i = 1; i <= x; i++) dp[1][i] = 1;
    }


	for( int i = 2; i <= n; i++){
		if(a[i]==0){
			for( int j = 1; j <= x; j++){
				for( int k = j-1; k <= j+1; k++){
					if( k >= 1 && k <= x){
						dp[i][j] = (dp[i][j] + dp[i-1][k]) % mod;
					}
				}
			}
		}else{
			for( int k = a[i]-1; k <= a[i]+1; k++){
				if( k >= 1 && k <= x){
					dp[i][a[i]] = (dp[i][a[i]] + dp[i-1][k]) % mod;
				}
			}
		}
	}
	int sum = 0;

	for( int i = 1;i <= x; i++) sum = (sum + dp[n][i]) % mod;

	cout << sum <<endl;


    
    
}
///ALHAMDULILLAH//
