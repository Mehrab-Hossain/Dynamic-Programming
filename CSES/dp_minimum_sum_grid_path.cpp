//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


const int mx = 1e2;
int grid[mx][mx];
int track[mx][mx];
int dp[mx][mx];
int n, m;

int solve( int i, int j ){
	if( i > n || j > m) return 1e9;
	if(i == n && j == m) return grid[i][j];

	if(dp[i][j] != -1) return dp[i][j];

	int ans1 = solve(i+1, j);
	int ans2 = solve(i, j + 1);

	if( ans1 < ans2 ){
		track[i][j] = 0;
	}else track[i][j] = 1;

	return dp[i][j] = grid[i][j] + min(ans1, ans2);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;

    for( int  i = 1; i <= n; i++){
    	for( int j = 1; j <= m; j++){
    		cin >> grid[i][j];
    		dp[i][j] = -1;
    	}
    }


    cout << solve(1,1) <<endl;

    pair<int,int> x = {1,1};

    cout << 1 <<" "<< 1<<endl;


    while( x != make_pair(n,m)){
    	if(track[x.first][x.second] == 0){
    		x.first++;
    	}else x.second++;

    	cout << x.first <<" "<<x.second<<endl;
    }
    
   
    


    
    
}
///ALHAMDULILLAH//
