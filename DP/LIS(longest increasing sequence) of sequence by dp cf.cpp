//BISMILAHIRAHMANIR RAHIM

#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define allr(x)			  (x).rbegin(),(x).rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define loop(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define br                break
#define con               continue 

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

priority_queue<pii, vector<pii>, greater<pii> >q;
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int n;
	cin>>n;
	int dp[n+5]={0};
	int a[n+5],mark[n+5]={0},freq[n+5]={0},element[n+5]={0},mx=0;
	vector<int>v;
	v.pb(0);
	loop(i,1,n+1){
		cin>>a[i];
		if(a[i]>v.back()){
			dp[i]=v.size();
			v.pb(a[i]);
		}
		else{
			int id = lower_bound(v.begin(),v.end(),a[i])-v.begin();
			dp[i]=id;
			v[id]=a[i];
		}
		mx = max(mx,dp[i]);
	}

	for(int i=n;i>0;i--){
		if(dp[i]==mx || a[i]<element[dp[i]+1]){
			mark[i]=1;
			freq[dp[i]]++;
		}

		if(mark[i]){
			element[dp[i]]= max(a[i],element[dp[i]]);
		}
	}

	for(int i=1;i<=n;i++){
		if(mark[i]==0)cout<<1;
		else if(freq[dp[i]]>1)cout<<2;
		else cout<<3;
	}




}
///ALHAMDULILLAH//