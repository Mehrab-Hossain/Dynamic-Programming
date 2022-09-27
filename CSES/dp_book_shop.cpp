//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"
const int mx = 1e5;
int a[mx+5], b[mx+5];
int dp[1005][mx+5];

int main() {
    

    int n, x;
    cin >> n >> x;
    for( int i = 1; i <= n; i++) cin >> a[i];
    for( int i = 1; i <= n; i++) cin >> b[i];


    for( int i = 1; i <= n; i++){
    	for( int j = 0; j <= x; j++){
    		dp[i][j] = dp[i-1][j];

    		if(a[i] <= j) dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + b[i]);	
    	}
    }

    cout << dp[n][x] <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
