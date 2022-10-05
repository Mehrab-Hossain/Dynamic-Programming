//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"

const int mx = 1e6, mod = 1e9+7;
string s;
int n;
int dp[mx];

int solve(int i){
	if(i<1) return 1;
	if(dp[i]) return dp[i];

	if(i-1 >=0 && s[i]==s[i-1] && (s[i]=='u' || s[i]=='n')){
		return dp[i] =(solve(i-1)%mod + solve(i-2)%mod)%mod;
	}else return dp[i] = solve(i-1)%mod;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    cin >> s;
    n = s.size();

    for (char x : s){
        if (x == 'w' || x == 'm'){
            cout << 0 << '\n';
            return 0;
        }
    }


    cout << solve(n-1) <<endl;


}
///ALHAMDULILLAH//
