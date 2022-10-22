//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"
const int mod = 998244353;
const int mx = 1e3;
int dp[mx+5][mx*2+5][5];
int n;

int solve(int index, int k, int prev){
	if( k < 0) return 0;
	if( index > n){
		if( k == 0) return 1;
		else return 0;
	}

	//cout << "YES"<<endl;

	if(dp[index][k][prev]!=-1) return dp[index][k][prev];

	int ans = 0;
	if(prev == 1){
		ans = (ans % mod + solve(index+1, k-2, 2)%mod);
		ans = (ans % mod + solve(index+1, k, 3)%mod);
		ans = (ans % mod + solve(index+1, k, 4)%mod);
	}else if( prev == 2){
		ans = (ans % mod + solve(index+1, k-2, 1)%mod);
		ans = (ans % mod + solve(index+1, k, 3)%mod);
		ans = (ans % mod + solve(index+1, k, 4)%mod); 
	}else if( prev == 3){
		ans = (ans % mod + solve(index+1, k-1, 1)%mod);
		ans = (ans % mod + solve(index+1, k-1, 2)%mod);
		ans = (ans % mod + solve(index+1, k-1, 4)%mod);
	}else {
		ans = (ans % mod + solve(index+1, k-1, 1)%mod);
		ans = (ans % mod + solve(index+1, k-1, 2)%mod);
		ans = (ans % mod + solve(index+1, k-1, 3)%mod);
	}

	ans = (ans % mod + solve(index+1, k, prev)%mod);

	return dp[index][k][prev] = ans;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int  k;
    cin >> n >> k;

    memset(dp, -1, sizeof dp);

   

    int ans = 0;

    ans = (ans % mod + solve(2, k-2, 1)%mod);
    ans = (ans % mod + solve(2, k-2, 2)%mod);
    ans = (ans % mod + solve(2, k-1, 3)%mod);
    ans = (ans % mod + solve(2, k-1, 4)%mod);

   

    cout << ans % mod <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
