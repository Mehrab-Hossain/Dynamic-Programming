//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"
const int mod = 1e9+7;

int dp[505][300000]={0};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n;
    cin >> n;

    int x = (n*(n+1))/2;

    if(x%2) {
    	cout <<0<<endl;
    	return 0;
    }

    
    dp[0][0] = 1;
    for( int i = 1; i <= x; i++){
    	for( int j = 1; j <= n; j++){
    		dp[j][i] = dp[j-1][i];
    		if( j <= i){
    			dp[j][i] = dp[j][i] + dp[j-1][i-j];
    			dp[j][i] = dp[j][i] %mod;
    		}
    	}
    }

    cout << dp[n][x/2] <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
