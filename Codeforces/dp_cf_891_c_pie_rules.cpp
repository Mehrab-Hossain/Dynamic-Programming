//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"

const int mx = 100;
int pre[mx];
int dp[mx];
int a[mx];
int n;

int solve( int pos){
	//if(pos == n) return a[n];
	if(pos > n) return 0;

	if(dp[pos]) return dp[pos];

	int sum1 = solve(pos+1);
	int sum2 = pre[n]-pre[pos]- sum1 + a[pos];

	return dp[pos] = max(sum1, sum2);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> n;

    for( int i = 1; i <= n; i++){
    	cin >> a[i];
    	pre[i] = pre[i-1] + a[i];
    }

    int fi = solve(1);

    cout << pre[n] - fi <<" "<< fi <<endl;
    
   
    


    
    
}
///ALHAMDULILLAH//
