//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"
const int mx = 1e6+5;
int x[mx+5], h[mx+5];
int dp[mx+5];
int n;

int solve( int pos, int current){
	if( pos == n) return 1;
	//cout << pos <<endl;
	if(dp[pos]) return dp[pos];

	int sum1 = 0, sum2 = 0, sum3 = 0;

	if( x[pos] - h[pos] > current) sum1 = 1 + solve(pos+1, x[pos]);
	if( x[pos] + h[pos] < x[pos+1]) sum2 = 1 + solve(pos+1, x[pos] + h[pos]);
	else sum3 = solve(pos+1, x[pos]);

	return dp[pos] = max({sum1, sum2, sum3});


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    cin >> n;
    //memset(dp, -1, sizeof dp);
    x[n+1] = 1e18;

    for ( int i = 1; i <= n; i++){
    	cin >> x[i] >> h[i];
    }
    if(n==1) {
    	cout <<1 <<endl;
    	return 0;
    }


    int ans = 1 + solve(2, x[1]);

    cout << ans <<endl;
    


    
    
}
///ALHAMDULILLAH//
