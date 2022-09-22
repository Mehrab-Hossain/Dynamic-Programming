//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"
const int mod = 1e9+7;
const int mx = 1e6;
int dp[105][mx+5] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n, x;
    cin >> n >> x;

    int a[n+5] = {0};

    for( int i = 1; i <= n; i++) cin >> a[i];

    for( int i = 1; i <= n; i++){
    	for( int sum = 0; sum <= x; sum++){
    		if(sum == 0){
    			dp[i][0] = 1;
    		}else{
    			int op1 = 0, op2 = 0;

    			if(sum >= a[i]){
    				op1 = dp[i][sum-a[i]];
    			}

    			op2 = dp[i-1][sum];

    			dp[i][sum] = (op1 + op2) % mod;
    		}
    	}
    }

    cout << dp[n][x] <<endl;
    


    
    
}
///ALHAMDULILLAH//
