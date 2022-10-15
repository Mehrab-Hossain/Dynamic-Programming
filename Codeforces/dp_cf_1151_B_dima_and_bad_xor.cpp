//BISMILAHIRAHMANIR RAHIM
//Author : Md. Mehrab Hossain

#include<bits/stdc++.h>
using namespace std;


#define endl              "\n"

const int mx = 500+5;
int n, m;

vector<vector<pair<int,int>>>dp(mx, vector<pair<int,int>>(1024,{-1,-1}));
int grid[mx][mx];

pair<int,int> solve(int rowIndex, int currentXor){
	if( rowIndex == n){
		return {currentXor!= 0 ? 1: 0, -1};
	}

	if( dp[rowIndex][currentXor].first != -1){
		return dp[rowIndex][currentXor];
	}

	dp[rowIndex][currentXor].first = 0;

	for( int i = 0; i < m; i++){
		pair<int,int> x = solve(rowIndex+1, currentXor ^ grid[rowIndex][i]);

		if(x.first){
			dp[rowIndex][currentXor] = {1, i};
			break;
		}
	}
	return dp[rowIndex][currentXor];
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;

    for( int i = 0; i < n; i++){
    	for( int j = 0; j < m; j++){
    		cin >> grid[i][j];
    	}
    }

    pair<int,int> x = solve(0, 0);

    if(x.first){
    	cout <<"TAK"<<endl;
    }else{
    	cout <<"NIE"<<endl;
    	return 0;
    }

    int row = 0, currentXor = 0;

    while(row< n){
    	int nthCol = dp[row][currentXor].second;

    	cout << nthCol + 1 <<" ";
    	int newRow = row + 1;
    	int newXor = currentXor ^ grid[row][nthCol];

    	row = newRow;
    	currentXor = newXor;
    }




    
   
    


    
    
}
///ALHAMDULILLAH//
