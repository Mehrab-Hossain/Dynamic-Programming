//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"
int mod = 1e9+7;
const int mx = 1e6+6;
int dp[mx];

int solve(int num){
	if(num == 0) return 1;
	if(dp[num]!=0) return dp[num];

	int coun = 0;
	for( int i = 1; i <= 6; i++){
		if( num - i >=0 )
		coun = coun % mod + solve(num - i) % mod;
		coun %= mod;
	}
	return dp[num] = coun;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n;
    cin >> n;

    cout << solve(n) <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
