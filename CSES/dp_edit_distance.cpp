//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl              "\n"
 
const int mx = 6e3+5;
int dp[mx+5][mx+5];
 
string s1, s2;
int n, m;
int solve( int i, int j){
	
	if( i == n) return m - j;
	if( j == m) return n - i;
 
	if(dp[i][j]!=-1) {
 
		return dp[i][j];
	}
	if(s1[i]==s2[j]){
		return dp[i][j] = solve(i+1, j + 1);
	}else{
		
		return dp[i][j] = 1 + min({solve(i+1,j), solve(i,j+1), solve(i+1,j+1)});
	}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
 
   	cin >> s1 >>s2;
   	n = s1.size();
   	m = s2.size();
   	memset(dp, -1, sizeof(dp));
 
   	cout << solve(0,0) <<endl;
    
 
 
    
    
}
///ALHAMDULILLAH//