//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    int n;
    cin >> n;
    vector<bool> possible(1e5+6, false);
    possible[0] = true;
    set<int>st;

    int a[n+5]={0};
    for( int i = 1; i <= n; i++) cin >> a[i];

    for( int i = 1; i <= n; i++) {
    	vector<bool>current(1e5+6, false);

    	for( int  j = 0; j <= 1e5; j++){
    		if( possible[j]){
    			current[j] = true;
    			current[j+a[i]] = true;
    			st.insert(j+a[i]);
    		}
    	}
    	possible = current;
    }

    cout << st.size() <<endl;
    for(auto x: st) cout << x <<" ";
    cout <<endl;
   
    


    
    
}
///ALHAMDULILLAH//
