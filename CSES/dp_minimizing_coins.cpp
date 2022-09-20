//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"

int const mx = 1e6+5;
int inf = 1e9+7;
int n, m;
int a[105];
int dp[mx];

int solve( int num){
	if(num == 0) return 1;
	int mn = inf;

	if(dp[num]!=0) return dp[num];

	for( int i = 1; i <= n; i++){
		if(a[i] <= num){
			mn = min(mn, solve(num-a[i]) + 1);
		}
	}
	return dp[num] = mn;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

 
    cin >> n >> m;
    for( int i = 1;i <= n; i++) cin >> a[i];


    int ans = solve(m);
   	if(ans>=inf) cout << -1 <<endl;
   	else cout << ans -1 <<endl;
	
    


    
    
}
///ALHAMDULILLAH//
