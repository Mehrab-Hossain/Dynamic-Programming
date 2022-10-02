//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"
const int mx = 1e6;
int dp[mx][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int t;
    t = 1;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	int n = s.size();
    	s = "#"+s;

    	dp[0][0] = dp[0][1] = 0;

    	long long int ans = 0;

    	for( int i = 1; i <= n; i++){
    		if(s[i]=='?'){
    			dp[i][0] = max(0, dp[i-1][1]) + 1;
    			dp[i][1] = max(0, dp[i-1][0]) + 1;
    		}else{
    			int x = s[i]-'0';
    			dp[i][x] = max(0, dp[i-1][!x]) + 1;
    			dp[i][!x] = -1e9;
    		}

    		ans += max(dp[i][0], dp[i][1]);
    	} 
    	cout << ans <<endl;
    }
   
    


    
    
}
///ALHAMDULILLAH//
