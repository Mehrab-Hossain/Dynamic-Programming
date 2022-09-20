//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"

const int mx = 1e6+5;

int dp[mx];

int solve( int num){
	if(num == 0) return 1;
	if(dp[num]!=0) return dp[num];
	int mn = 1e9;
	set<int>st;
	int x = num;
	while(x){
		st.insert(x%10);
		x/=10;
	}

	for( auto x1: st){
		if(x1 > 0)
		mn = min(mn, solve(num-x1)+1);
	}

	return dp[num] = mn;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n;
    cin >> n;
    cout << solve(n) - 1<<endl;


   
    


    
    
}
///ALHAMDULILLAH//
