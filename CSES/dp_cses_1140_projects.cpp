//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define endl              "\n"
const int mx = 2e5+6;


bool compare(pair<pair<int,int>,int>a, pair<pair<int,int>,int>b){
	return a.first.second < b.first.second;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n;
    cin >> n;
    int dp[n+5]={0};

    vector<pair<pair<int,int>,int>>pr(n);

    for( int i = 0; i < n; i++){
    	cin >> pr[i].first.first >> pr[i].first.second >> pr[i].second;
    }

    sort(pr.begin(), pr.end(), compare);

    vector<int>v;

    for( int i = 0; i < n; i++){
    	v.push_back(pr[i].first.second);
    }

  

    dp[0] = pr[0].second;

    for( int i = 1; i < n; i++){
    	int pos = lower_bound(v.begin(), v.begin()+i, pr[i].first.first) - v.begin();
    	int sum1 = pr[i].second;

    	if(pos < n && v[pos]<pr[i].first.first) {
    		sum1 += dp[pos];
    	}
    	else{
    		if(pos>0) pos-=1;
    		if(v[pos]<pr[i].first.first) sum1 += dp[pos];
    	}

    	dp[i] = max(dp[i-1], sum1);
    }

    cout << dp[n-1] <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
