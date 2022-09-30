//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"
const int mx = 1e3+5;
int dp[mx][mx];

int solve( int i, int j){
	if( i == j) return 0;
	if(dp[i][j]) return dp[i][j];

	int x = 1e9;

	for( int k = 1; k < i; k++) x = min({x, solve(i-k, j)+solve(k,j)});
	for( int k = 1; k < j; k++) x = min({x, solve(i, j-k)+solve(i,k)});

	return dp[i][j] = 1 + x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n, m;
    cin >> n >> m;

    cout << solve(n, m) <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
